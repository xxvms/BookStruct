// BookStruct.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

struct Book
{
	std::string author;
	std::string title;
	int publicationYear;

};

void addBook(Book * book);
void getBook(Book * book);

int main()
{
	Book book;
	addBook(&book);
	getBook(&book);

	system("pause");
    return 0;
}

void addBook(Book * book)
{
	book->author = "Tomcio";
	book->title = "pipka na zachodzie";
	book->publicationYear = 2017;
}
void getBook(Book * book)
{
	std::cout << book->author << std::endl;
	std::cout << book->title << std::endl;
	std::cout << book->publicationYear << std::endl;
}
