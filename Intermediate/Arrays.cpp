// Arrays are a list of a given datatype
// unlike javascript arrays, these are fixed length
// when you define them you tell it how many items there should be
// and there can be no more and no less
// For a non-fixed length array see Advanced/Vectors.cpp

// Arrays are defined by datatype name[] = {value1, value2, value3};
// For example

int numbers[] = {1, 2, 3, 4, 5};

// These can be read by calling their index
// the index of an array starts at 0, for example
int i = numbers[0];
// this will set i = 1;

i = numbers[4];
// this will set i = 5;

// Similarly you can reasign an index the same way
numbers[0] = 90;
// New array = {90, 2, 3, 4, 5}
