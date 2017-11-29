#include <iostream>
#include "Patron.hpp"
#include <string>


using namespace std;


int main() {
	Book a("1", "A Dick Wrote Only By Dick", "Thadeus Venture");
	Book b("2", "DICKBUTT", "ALSO DICKBUTT");

	Patron me("1", "Michael");


	cout << a.getAuthor() << endl;
	
	me.addBook(&a);
	me.addBook(&b);

	vector<Book*> mybooks = me.getCheckedOutBooks();

	for (int index = 0; index < mybooks.size(); index++) {
		cout << "Author is: " << (*mybooks[index]).getAuthor() << endl;
	}
	
	me.removeBook(&b);

	vector<Book*> mynewbooks = me.getCheckedOutBooks();

	for (int index = 0; index < mynewbooks.size(); index++) {
		cout << "Author is: " << (*mynewbooks[index]).getAuthor() << endl;
	}


	cin.get();
}