// Enums are a custom datatype that gives you a set of named options
// for example

enum option {
	option1,
	option2,
	option3,
	option4,
	option5,
	option6
}

option currentOption = option::option3;

if(currentOption == option::option2){
	// Code a
}
else{
	//Code b
}


// Technically enums are just named integers, the enum option above is the same as below

enum optionTechnical {
	option1 = 0,
	option2 = 1,
	option3 = 2
}

// or

enum compass {
	north = 0,
	east = 90
	south = 180,
	west = 270,
}

// This is useful when you need to use math on a select few options
