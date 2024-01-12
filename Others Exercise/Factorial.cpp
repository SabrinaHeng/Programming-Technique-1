#include<iostream>
using namespace std;
int main(){
	int num,fac=1,a;
	cout << "Enter Number :";
	cin >> num;
	
	for(int a = 0;(a<num);a++){
		fac *= (num-a);
		
		if(a!=4){
			cout << num-a << "*";
		}else{
			cout << num-a << "=";
		}
	}
	cout << fac <<endl;
	cout << "This is factorial for " << num;
	
	return 0;
} 
