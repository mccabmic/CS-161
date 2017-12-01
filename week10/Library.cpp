/*************************
Author:Michael McCabe
Date: November 28, 2017
Description: This is the class IMPLEMENTATION file for the Patron object
Text Editor: Notepad++
**************************/

#include "Library.hpp"
#include <string>

Library::Library() {
	currentDate = 0;

}

void Library::addBook(Book* b) {
	holdings.push_back(b);

}
void Library::addPatron(Patron* p) {
	members.push_back(p);
}

/*
if the specified Book is not in the Library, return "book not found"
if the specified Patron is not in the Library, return "patron not found"
if the specified Book is already checked out, return "book already checked out"
if the specified Book is on hold by another Patron, return "book on hold by other patron"
otherwise update the Book's checkedOutBy, dateCheckedOut and Location; if the Book was on hold for this Patron, update requestedBy; 
update the Patron's checkedOutBooks; return "check out successful"*/
std::string Library::checkOutBook(std::string pID, std::string bID) {

	if (getPatron(pID) == nullptr)
		return "patron not found";

	if (getBook(bID) == nullptr)
		return "book not found";

	if (getBook(bID)->getLocation() == CHECKED_OUT)
		return "book already checked out";
	
	if (getBook(bID)->getLocation() == ON_HOLD_SHELF) {
		if (getBook(bID)->getRequestedBy() != getPatron(pID))
			return "book on hold by other patron";
		else
			getBook(bID)->setRequestedBy(nullptr);
	}

	
	getBook(bID)->setCheckedOutBy(getPatron(pID));
	getBook(bID)->setDateCheckedOut(currentDate);
	getBook(bID)->setLocation(CHECKED_OUT);

	getPatron(pID)->addBook(getBook(bID));

}

/*if the specified Book is not in the Library, return "book not found"
if the Book is not checked out, return "book already in library"
update the Patron's checkedOutBooks; update the Book's location depending on whether another Patron has requested it; update the Book's checkedOutBy; return "return successful"
*/
std::string Library::returnBook(std::string bID) {

	if (getBook(bID) == nullptr)
		return "book not found";

	if (getBook(bID)->getLocation() != CHECKED_OUT)
		return "book already in library";

	getBook(bID)->getCheckedOutBy()->removeBook(getBook(bID));

	if (getBook(bID)->getRequestedBy() != nullptr)
		getBook(bID)->setLocation(ON_HOLD_SHELF);
	else
		getBook(bID)->setLocation(ON_SHELF);

	getBook(bID)->setCheckedOutBy(nullptr);

	return "return successful";
}


/* This function simulates a Patron attempting tif(o request a Book.  If it's not in the library, return bfn, no patron, pnf, 
already requested- be on hold, and update the Book's requestedBy; if the Book is on the shelf, update its location to on hold; return "request successful"
*/
std::string Library::requestBook(std::string pID, std::string bID) {
	if (getPatron(pID) == nullptr) 
		return "patron not found";

	if (getBook(bID) == nullptr) 
		return "book not found";

	if (getBook(bID)->getRequestedBy() != nullptr) 
		return "book already on hold";

	else {
		getBook(bID)->setRequestedBy(getPatron(pID));

		if (getBook(bID)->getLocation() == ON_SHELF) {
			getBook(bID)->setLocation(ON_HOLD_SHELF);
			return "request successful";
		}

	}



}

/* This takes the amount that is being paid.  If the patron is not in the library,
return patron not found.  If so, use amendFind to update Patron's fine and return "payment successful"

*/
std::string Library::payFine(std::string pID, double payment) {
		
	if (getPatron(pID) == nullptr)
		return "patron not found";
	
	getPatron(pID)->amendFine(-payment);
	
	return "payment successful";

}

/* This function increments the current date and checks the Libary's 
holdings. If those holdings are checked out, and it's overdue, add 10 cents to the patron.
22 days is the threshold.*/
void Library::incrementCurrentDate() {
	currentDate++;

	for (Book* book : holdings) {
		if (book->getLocation() == CHECKED_OUT) {
			if ((currentDate - book->getDateCheckedOut()) > book->getCheckOutLength())
				(book->getCheckedOutBy())->amendFine(0.10);

		}
	}

	
}

Patron* Library::getPatron(std::string pID) {
	for (Patron* guy : members) {
		if (guy->getIdNum() == pID) {
			return  guy;
		}

	}

}

Book* Library::getBook(std::string bID) {
	for (Book* book : holdings) {
		if (book->getIdCode() == bID) {
			return  book;
		}
	}

}