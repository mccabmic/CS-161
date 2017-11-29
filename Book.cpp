/*************************
Author:Michael McCabe
Date: November 28, 2017
Description: This is the class IMPLEMENTATION file for the Book object
IDE: Notepad++
**************************/

#include "Book.hpp"

// Takes an idCode, title and author; checkedOutBy and requestedBy should be initialized to NULL; a new Book should be on the shelf
Book::Book(std::string idc, std::string t, std::string a) {
	
	idCode = idc;
	title = t;
	author = a;

	Locale location = ON_SHELF;

	Patron* checkedOutBy = nullptr;
	Patron* requestedBy = nullptr;

}
int Book::getCheckOutLength() {
	return CHECK_OUT_LENGTH;

}
std::string Book::getIdCode() {
	return idCode;
}

std::string Book::getTitle() {
	return title;

}
std::string Book::getAuthor() {
	return author;

}
Locale Book::getLocation() {
	return location;

}
void Book::setLocation(Locale place) {
	location = place;

}
Patron* Book::getCheckedOutBy() {
	return checkedOutBy;

}
void Book::setCheckedOutBy(Patron* person) {
	checkedOutBy = person;


}
Patron* Book::getRequestedBy() {
	return requestedBy;

}
void Book::setRequestedBy(Patron* person) {
	requestedBy = person;

}
int Book::getDateCheckedOut() {
	return dateCheckedOut;

}
void Book::setDateCheckedOut(int date) {
	dateCheckedOut = date;

}