#include <iostream>

using namespace std;
#include "book.h"
void printBookDetails(const Book& book);
int main() {
	Book gameofThrones("George Martin", "Game of Thrones", "Fantasy", 864);
	Book mathBook("Jmaes Stewart", "Calculus", "Math", 1392);
	Book cppBook("Bjarne Stroustrup", "The C++ Programming Language", "Programming", 1376);
	//printBookDetails(gameofThrones);
	//printBookDetails(mathBook);
	//printBookDetails(cppBook);
	gameofThrones.printBookDetails();
	return 0;


}
void printBookDetails(const Book& book)
{
	cout << book.getTitle() << " by " << book.getAuthor()
		<< " has " << book.getNumPages() << " pages,"
		<< " and its genre is " << book.getGenre() << endl;
}