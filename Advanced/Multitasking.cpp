// For simplicity this will refer to vex multitasking

// multi-tasking in the concept of running code in parallel
// You can think of normal code as a piece of thread, you move down it as it does all
// of the actions in order
// however, this can have problems when you have an action that takes a long time
// this holds up all the next actions as it waits for a current action to finish

// This is where multi-tasking comes in, rather than having one thread, just have more
// you can place the long running task on a different thread which can wait for the task
// while the main thread keeps on going
// This is called multi-threading
// Multi-threading and multi-tasking are slightly different concepts but achieve the same result
// But this isn't the place to get into the complexities of each type

// Code is adapted from vexCode pro examples

// With tasks

int myTaskCallback() {
	int count = 0;
	while (true) {
		Brain.Screen.setCursor(1, 1);
		Brain.Screen.print("myTaskCallback has itterated %d times", count);
		count++;
		wait(25, msec);
	}

	return 0;
}

int main() {
	vexcodeInit();

	task myTask = task(myTaskCallback);

	int count = 0;
	while(true) {
		Brain.Screen.setCursor(2, 1);
		Brain.Screen.print("main has itterated %d times", count);
		count++;
		wait(25, msec);
	}
}



// With Threads

int myThreadCallback() {
  int count = 0;
  while (true) {
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("myThreadCallback has iterated %d times", count);
    count++;
    this_thread::sleep_for(25);
  }
  return 0;
}

int main() {
  vexcodeInit();

  thread myThread = thread(myThreadCallback);

  int count = 0;
  while (true) {
    Brain.Screen.setCursor(2, 1);
    Brain.Screen.print("main has iterated %d times", count);
    count++;
    wait(25, msec);
  }
}

// This can be especially useful when toggling an intake
// for example
// When you press a button it will trigger Controller1.ButtonR1.pressing()
// every 20milliseconds, this can lead to a very large number of input you
// you just press the button once, if its odd then you will see the behaviour you expect
// if not, it will stay in its current state
//
// Therefore, we want to wait before we accept the next input while keeping the motor spinning if its toggled
// so the button will only send an event through evert 250 milliseconds instead of every 20
// Allowing for single presses
//
// Theres probably a better way to do single button inputs without tasks
// but its a good example

bool canToggle = true;
bool isToggled = false;

int waitBeforeAcceptingNextInput() {
	wait(250, msec);
	canToggle = true;
}

int main() {
	while (true) {
		if(canToggle && Controller1.ButtonR1.pressing()){
			canToggle = false;
			isToggled = !isToggled;
			task waitBeforeNextInput = task(waitBeforeAcceptingNextInput);
		}

		if(isToggled){
			Motor1.spin(forward);
		}
		else{
			Motor1.stop();
		}

		wait(20, msec);
	}
}


// There is also ways to pass parameters to a task, whilst it is better programming
// to have a generalised function rather than a separately defined task function for each button
// you want toggled, I cannot remember how to achieve it and it was incredibly painful to do
