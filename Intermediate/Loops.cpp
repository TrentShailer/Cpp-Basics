// Loops are useful when working with arrays

int numbers[] = {25, 30, 28, 3, 98};

for(int i = 0; i < numbers.size(); i++){
	std::cout << numbers[i] << std::endl;
}
// will print
// 25
// 30
// 28
// 3
// 98

// while loops repeat until a condition is met
bool flag = false;

while(!flag){
	if(/* Condition */){
		flag = true;
		// This will exit the loop as flag is no longer false
	}
	else {
		// Other code
		// This code will be repeated until condition is met
	}
}
// If a loop is going to be going forever
// makesure to put a small delay at the end or else it will crash
