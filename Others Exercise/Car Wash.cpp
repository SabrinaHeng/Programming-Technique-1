#include<iostream>
#include<string>
using namespace std;

//constant with the associated values
#define WASH 10.0		//the price of WASH service charge
#define VACUUM 7.0		//the price of VACUUM service charge
#define POLISH 15.0		//the price of POLISH service charge

// Task 6 : List all function prototypes.
void setType(string &carType);
void setPackage(int &wsPkg);
float wash(string carType);
float vacuum(string carType);
float polish(string carType);

// Task 7 : Call the functions from Task 1 until Task 5.
int main(){
	string carType;				//car type variable
	int wsPkg;					//car wash service package
	float totalCharge = 0;		//total service charge based on different wash service package with different car type
	
	//call setType function with the parameter carType
	setType(carType);
	
	//call setPackage function with the parameter wsPkg
	setPackage(wsPkg);
	
	// Task 7 : (ii) totalCharge is the variable to hold the total service charge based on different wash service package with different car type (sedan or mpv).
	switch (wsPkg){
		case 1 : totalCharge = wash(carType);
					break;
					
		case 2 : totalCharge = vacuum(carType);
					break;
					
		case 3 : totalCharge = polish(carType);
					break;
	}
	cout << endl;
	cout << "Total service charge is " << totalCharge;
	return 0;
	
}

// Task 1 : Function to set car type
void setType (string &type){
	do{
		cout << "Enter car type (sedan/mpv) :";
		cin >> type;
	}while(type != "sedan" && type != "mpv");
	
	cout << endl;
}

// Task 2 : Function to set wash service package
void setPackage (int &pkg){
	cout << "1. Basic" << endl;
	cout << "2. Deluxe" << endl;
	cout << "3. Premium" << endl;
	cout << "Choose wash service package (1/2/3) :";
	cin >> pkg;
	
	cout << endl;
}

// Task 3 : Function to determine exterior wash service charge based on car type
float wash (string type){
	double charge;
	if(type == "mpv")
		 charge = 1.2*WASH;
	else
		 charge = WASH;
	cout << "Wash service charge is " << charge << endl << endl;	 
	return charge;
}

// Task 4 : Function to determine interior vacuum service charge based on car type
float vacuum (string type){
	double charge;
	if(type == "mpv")
		 charge = 1.05*VACUUM;
	else
		 charge = VACUUM;
	cout << "Vacuum service charge is " << charge << endl << endl;	 
	return charge;
}

// Task 5 : Function to determine exterior polish service charge based on car type
float polish (string type){
	double charge;
	if(type == "mpv")
		 charge = 1.2*POLISH;
	else
		 charge = POLISH;
	cout << "Polish service charge is " << charge << endl << endl;	 
	return charge;
}
