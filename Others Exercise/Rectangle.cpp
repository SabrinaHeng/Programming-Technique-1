//Square
//Sabrina Heng
#include<iostream>
using namespace std;

void displaySquare(int,int);

int main(){
	int rows,cols;
	
	cout << "This system will only print square shape"<<endl;
	cout << "Please enter row and column :";
	cin >> rows >> cols;
	
	if(rows!=cols){
		cout << "Row must equal to Column !!" << endl;
		cout << "Please enter again :";
		cin >> rows >> cols;
	}
	
	displaySquare(rows,cols);
	
	return 0;
}

void displaySquare(int rows,int cols){
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout << "*" << " ";
		}
	
	cout <<endl;	
	}
}
