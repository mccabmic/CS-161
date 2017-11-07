/*************************
Author:Michael McCabe
Date: November 7, 2017
Description: This is the class IMPLEMENTATION file for the Person object
IDE: Notepad++
**************************/

#include "Person.hpp"

Person::Person(std::string subjectName, double subjectAge){
	name = subjectName;
	age = subjectAge;	
	}
	
std:string Person::getName(void) const{
	return(name);
	}

double  Person::getAge(void) const{
	return(age);
	}



