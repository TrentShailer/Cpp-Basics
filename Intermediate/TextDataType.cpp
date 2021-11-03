// Text datatypes in most languages are quite easy
// However in C++ they are a little more complicated

// They can be many data types, for example

const char* type1 = "Text";

char type2[] = "Text";

char type3 = {'T', 'e', 'x', 't'}

#include <string>
string type4 = "Text";

// So what way is right?
// Well, all of them are right
// you will pretty much always run into a problem at some point
// where the type you are using is not accepted by a function
// and then you have to go through the trouble of chaning it
// or trying to convert between the two data types
