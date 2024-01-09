#include<iostream>
using namespace std;

double getAmount(){
	double amount;
		cout << "Please enter the amount spent : ";
		cin >> amount;	
	while(amount <=0){
		cout << "Amount must be greater than 0." << endl;
		cout << "Please enter the amount spent : ";
		cin >> amount;	
	}
	return amount ;
}
bool validTime(double time){
	int hours;
	double min;
	
	hours = time;
	min = time-hours;
	
	if(hours < 0 || hours >24){
		cout << "Punch in time must be between 00.00 and 23.59." << endl << endl;
		return 0;
	}else{
		if(min < 0.00 || min > 0.59){
			cout << "Punch in time must be between 00.00 and 23.59." << endl << endl;
			return 0;
		}else{
			return 1;
		}
	}
}

void times(double &PI,double &PO){
	do{
		cout << "Please enter the punch in time (HH.MM) : ";
		cin >> PI;
	}while(validTime(PI) == false);
	
	do{
		cout << "Please enter the punch out time (HH.MM) : ";
		cin >> PO;
		while(PO<PI){
			cout << "Invalid inputs!!" << endl << endl;
			cout << "Please enter the punch in time (HH.MM) : ";
			cin >> PI;
			cout << "Please enter the punch out time (HH>MM) : ";
			cin >> PO;
		}
	}while(validTime(PO)==false);
}

void mealsAllowance(double &E,double &GA, double &AA){
	double PI,PO,aa=0,allowance=0,breakfast=0,lunch=0,dinner=0;
	times(PI,PO);
	
	if(PI > 0.00 && PI < 7.00){
		cout << "\n:: Breakfast ::" << endl;
		breakfast = getAmount();
		allowance += 5;
		if(breakfast > 5){
			aa += 5;
		}else{
			aa+= breakfast;
		}
	}
	
	if(PO > 12.00){
		cout << "\n:: Lunch ::" << endl;
		lunch = getAmount();
		allowance += 7;
		if(lunch > 7){
			aa += 7;
		}else{
			aa += lunch;
		}
	}
	
	if(PO > 18.00){
		cout << "\n:: Dinner ::" << endl;
		dinner = getAmount();
		allowance += 7;
		if(dinner > 7){
			aa += 7;
		}else{
			aa += dinner;
		}
	}
	E = breakfast + lunch + dinner;
	GA = allowance;
	AA = aa;
}

int main(){
	int days,count=1;
	double PI,PO,E,GA,AA;
	double tot_expenses=0,tot_ga=0,tot_aa=0,extra=0,save=0;
	cout << "Please enter the number of working days : ";
	cin >> days;
	
	while(count<=days){
		cout << "\nDay " << count << ":" << endl;
		mealsAllowance(E,GA,AA);
		tot_expenses += E;
		tot_ga += GA;
		tot_aa += AA; 
		count ++;
	}
	extra = tot_expenses - tot_aa;
	save = tot_ga - tot_aa;
	cout << "\nTotal expenses            : RM" << tot_expenses << endl;
	cout << "Total given allowance     : RM" << tot_ga << endl;
	cout << "Total allowable allowance : RM" << tot_aa << endl << endl;
	if(extra>0){
		cout << "Extra amount paid by employee   : RM" << extra << endl;
	}
	if(save>0){
		cout << "Total save by employer          : RM" << save;
	}
	return 0;
}
