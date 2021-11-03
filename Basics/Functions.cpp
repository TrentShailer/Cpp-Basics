// Functions store a set of code that can be called upon
// They are defined by
// returnType name(parameters) {}

// return type can be any dataType that the function should return, or if nothing
// is returned it should be void
#include <iostream>

void example(){
	std::cout << "Example function" << std::endl;
}

// Running the function
example();
// This will print 'Example function' to console


// With a return type

int exampleReturnType(){
	// whatever is returned must have the same datatype as the return type
	return 1;
}

std::cout << exampleReturnType() << std::endl;
// This will print '1'


// With parameters

int doubleNumber (int number){
	return number * 2;
}

std::cout << doubleNumber(5) << std::endl;
// This will print '10';
