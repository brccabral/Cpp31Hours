#include <iostream>
#include "person.h"
#include "engineer.h"

int main()
{

	Engineer eng1("Daniel Gray", 23, "asdl;fkjdas;fkdas;fk", 4);
	std::cout << "eng1 : " << eng1 << std::endl;

	Engineer eng2; // default constructor, obj will have default values
	std::cout << "eng2 : " << eng2 << std::endl;

	Engineer eng3("John Gray", 55, "123456"); // will use Person() constructor
	std::cout << "eng3 : " << eng3 << std::endl;

	/*
	Custom constructor for Person called...
	Custom constructor for Engineer called...
	eng1 : Engineer [Full name : Daniel Gray,age : 23,address : asdl;fkjdas;fkdas;fk,contract_count : 4]
	Default constructor for Person called...
	eng2 : Engineer [Full name : None,age : 0,address : None,contract_count : 0]
	Custom constructor for Person called...
	eng3 : Engineer [Full name : John Gray,age : 55,address : 123456,contract_count : 0]
	*/

	return 0;
}