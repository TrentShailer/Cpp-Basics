// Vectors are dynamic length lists of a given datatype

#include <vector>
#include <iostream>

std::vector<int> intList;
std::vector<float> floatList = {0.1, 0.2, 0.3, 0.4, 0.5};

// Itterating
for(const int& i : floatList){
	std::cout << i << std::endl;
}


// Add elements

intList.push_back(3);
// adds 3 to the back of the vector

// Accessing elements

floatList.at(2);
// 0.3
// or
floatList[2];
// 0.3

// Change element

floatList.at(0) = 1.1;
// new list {1.1, 0.2, 0.3, 0.4, 0.5}


// Delete element

intList.pop_back();
// Removes last element

// Theres much more to vectors that just these basics
// read up on it here
// https://www.programiz.com/cpp-programming/vectors
