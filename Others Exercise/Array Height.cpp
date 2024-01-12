#include<iostream>
using namespace std;
//const int SIZE = 5;

double calcBMI(double height[],double weight[],int size){
	double bmi[size];
	for(int i=0 ; i<size ; i++){
		bmi[i] = weight[i]/((height[i]/100)*(height[i]/100));
		cout << "BMI " << i+1 << " = " <<  bmi[i] << endl;
	}
	return bmi[size];
}

int main(){
	int size;
	double height [size];
	double weight [size];
	cout << "========================================" << endl;
	cout << "   	      BMI COUNTER              " << endl;
	cout << "========================================" << endl;
	cout << "Enter the number of person :";
	cin >> size;
	cout << endl;
	
	for (int i =0 ; i<size ;i++){
		cout << "Enter height " << i+1 << " (cm):";
		cin >> height [i];
		
		cout << "Enter weight " << i+1 << " (kg):";
		cin >> weight [i];
		
	}
	
	calcBMI(height,weight,size);
	
	return 0;
}
