/*************************
Author:Michael McCabe
Date: November 28, 2017
Description: This is the class IMPLEMENTATION file for the Patron object
Text Editor: Notepad++
**************************/

#include "Patron.hpp"

Patron::Patron(std::string idn, std::string n) {
	idNum = idn;
	name = n;

	fineAmount = 0;
}
std::string Patron::getIdNum() {
	return idNum;

}
std::string Patron::getName() {
	return name;

}
std::vector<Book*> Patron::getCheckedOutBooks() {
	return checkedOutBooks;

}
void Patron::addBook(Book* b) {
	checkedOutBooks.push_back(b);
}
void Patron::removeBook(Book* b) {

	for (unsigned index = 0; index < checkedOutBooks.size(); index++) {
		if (b == checkedOutBooks.at(index)) {
			checkedOutBooks.erase(checkedOutBooks.begin() + index);
		}
	}
	
}
double Patron::getFineAmount() {
	return fineAmount;

}
void Patron::amendFine(double amount) {
	fineAmount += amount;

}

