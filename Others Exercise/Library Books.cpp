#include<iostream>
#include<string>
using namespace std;
const int MAX_BOOKS = 100;
string book_Title[MAX_BOOKS];
string authors[MAX_BOOKS];
int years[MAX_BOOKS];

//function prototype
void displayMainMenu();
void addBook(int&);
void displayLibrary(int&);

int main(){
	int choice = 0,book_count = 0;
	do{
		displayMainMenu();
		cout << "Enter your choice :";
		cin >> choice;
		cout << endl << endl;
		
		switch(choice){
		case 1: addBook(book_count);
					break;
					
		case 2: displayLibrary(book_count);
					break;
		}
		
	}while(choice != 4);
	return 0;
}

void displayMainMenu(){
	cout << "<<<<< Library Management System >>>>>" << endl;
	cout << "========================================" << endl;
	cout << "1. Add a Book" << endl;
	cout << "2. Display Library" << endl;
	cout << "3. Search by Title" << endl;
	cout << "4. Quit" << endl;
}

void addBook(int &book_count){
	for(int i = 0; i < 1 ;i++){
		cout << "Enter book title :";
		cin >> book_Title[i];
		cout << "Enter author name :";
		cin >> authors[i];
		cout << "Enter publication year :";
		cin >> years[i];
		
		book_count++;
	}
}

void displayLibrary(int &book_count){
	cout << "\nLibrary Contents:" << endl;
	cout << "=========================" << endl;
	for(int i = 0;i < book_count;i++){
		cout << "Title :" << book_Title[i] << endl;
		cout << "Author :" << authors[i] << endl;
		cout << "Year :" << years[i] << endl;
	}
}
