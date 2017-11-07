/*************************
Author:Michael McCabe
Date: November 7, 2017
Description: This is the class DEFINITION file for the Person object
IDE: Notepad++
**************************/

#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>

class Person{
	private:
		// Attributes
		std::string name;
		double age;
	
	public:
		// Constructions
		Person(std::string subjectName, double subjectAge);	
	
		// Getters
		std::string getName(void) const;
		double getAge(void) const;	
};

#endif // !PERSON_HPP
