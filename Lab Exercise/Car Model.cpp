#include<iostream>
#include<iomanip>
using namespace std;

void displayInfo(int mod,int var,int reg);		//function prototype 1
double calcInstallment(float downPayment,float interestRate,int period);		//function prototype 2
int main(){
	char choice;
	int model,variant,region,period;
	double downPayment, interestRate,monthlyIns;
	
	do{			//loop
	//user enter model,variants,region
	cout << "Proton Car Loan Calculator" << endl << endl;
	
	cout << "Model [1-X50 , 2-Exora , 3-Persona] :";
	cin >> model;
	cout << "Variants [1-1.6L Standard CVT , 2-1.6L Premium CVT] :";
	cin >> variant;
	cout << "Region [1-Peninsular Malaysia , 2-East Malaysia] :";
	cin >> region;
	
	cout << endl <<endl;
	displayInfo(model,variant,region);		//calling function displayInfo
	
	//user enter downpayment and rate
	cout << "\nDown Payment (MYR): ";
    cin >> downPayment;

    cout << "Interest Rate (%): ";
    cin >> interestRate;

    cout << "Repayment period (in years): ";
    cin >> period;
    
    monthlyIns = calcInstallment(downPayment,interestRate,period);		//calling fucntion calcInstallment
    
    cout << "\nMONTHLY INSTALLMENT (MYR): " << fixed << setprecision(2) << monthlyIns << endl; 
    
    cout << "\nDo you want to enter other data? [Y @ N] :";
    cin >> choice;
    
	}while(choice=='Y'||choice=='y');
	
	cout << "\nThank you :)";
	
	return 0;
}
//function 1
void displayInfo(int mod,int var,int reg){
	cout << "Car Info" << endl;
	cout << "Model :";
	switch(mod){
		case 1 : cout << "X50" << endl;
				  break;
		case 2 : cout << "Exora" << endl;
				  break;
		case 3 : cout << "Persona" << endl;
				  break;
	}
	cout << "Variant :";
	if(var==1){
		cout << "1.6L Standard CVT" << endl;
	}else
		cout << "1.6L Premium CVT" << endl;
		
	cout << "Region :";
	if(reg==1){
		cout << "Peninsular Malaysia" << endl;
	}else
		cout << "East Malaysia" << endl;
		
	cout << "Paint Type : Metallic" << endl;
	cout << "Price(MYR) : RM 54600.00" << endl;
	
}

//function 2
double calcInstallment(float downP,float rate, int period){

	double loanAmount = 54600.00 - downP;
	double monthlyInterestRate = rate/100;
	int totalPayment = period*12;
	double monthlyInstallment = ((loanAmount+(loanAmount*monthlyInterestRate)*period)/(totalPayment));
	
	return monthlyInstallment;
}
