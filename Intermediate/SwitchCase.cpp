// A switch case statement is similar to an if statement

int i = 0;

switch(i){
	case 0:
	  std::cout << "i is 0" << std::endl;
	  break;
	case 1:
	  std::cout << "i is 1" << std::endl;
	  break;
	default:
	  std::cout << "i is none of those options" << std::endl;
}


// This can be used will with enums

enum direction {
	north,
	south,
	east,
	west
}

direction currentDirection = direction::east;

switch(currentDirection){
	case direction::north:
		// Code
		break;
	case direction::south:
		// Code
		break;
	case direction::east:
		// Code
		break;
	case direction::west:
		// Code
		break;
	// No default needed since it must be one of those 4 options
}
