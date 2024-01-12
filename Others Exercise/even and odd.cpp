// SABRINA HENG WEI QI
//A23CS0265

#include<iostream>
using namespace std;
int main(){
	int num,count=1;
	
    cout << "Please enter a number :";
    cin >> num;
    
	while (num != 0){
		
		if (num%2==0){
		cout << num<< " is an even number"<<endl<<endl;
		cout << "Enter 0 to end the program"<<endl;
		cout << "Please enter a number :";
		cin >> num;
		
	    }else{
		cout << num<< " is an odd number"<<endl<<endl;
		cout << "Enter 0 to end the program"<<endl;
		cout << "Please enter a number :";
		cin >> num;
	    }	
	}  
return 0;	
}
