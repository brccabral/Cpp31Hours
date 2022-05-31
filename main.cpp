#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{

	Engineer eng1("Daniel Gray", 41, "Green Sky Oh Blue 33St#75", 12);

	std::cout << "----------" << std::endl;
	Engineer eng2(eng1); // c++ has a copy constructor by default
	std::cout << "eng2 : " << eng2 << std::endl;

	std::cout << "----------" << std::endl;
	CivilEngineer cieng1("Daniel Gray", 41, "Green Sky Oh Blue 33St#75", 12, "Road Strength");

	std::cout << "----------" << std::endl;
	CivilEngineer cieng2(cieng1);
	std::cout << "eng2 : " << cieng2 << std::endl;

	return 0;
}