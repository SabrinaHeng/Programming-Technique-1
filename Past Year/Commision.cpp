//SABRINA HENG WEI QI
//A23CS0265
//QUESTION 2
#include<iostream>
using namespace std;

int main(){
	
}

void readQty(int &qA,int &qB,int &qC){
	do{
	cout << "Product A : ";
	cin >> qA;
	}while(qA < 0 || qA > 100);
	
	do{
	cout << "Product B : ";
	cin >> qB;
	}while(qB < 0 || qB > 100);
	
	do{
	cout << "Product C : ";
	cin >> qC;
	}while(qC < 0 || qC > 100);
}

void displayHighProd(int com_A,int com_B,int com_c){
	int high_com;
	if(com_A > com_B){
		high_com = com_A;
		if(com_A > com_C){
			high_com = com_A;
		}else{
			high_com = com_C;
		}
	}else{
		high_com = com_B
		if(com_B > com_C){
			high_com = com_B;
		}else{
			high_com = com_C;
		}
	}
	cout << high_com;
}

int calcAvrg(int num_Agent,int total_com){
	
}
