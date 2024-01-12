// combination
// Sabrina Heng Wei Qi

#include<iostream>
using namespace std;

double distance(double,double); //function prototype
int days(int,int,int);	//function prototype

int main(){
	
	int years,months,weeks;
	double rate,time;
	cout << "Please enter rate and time :";
	cin >> rate >> time;
	
	double distance(double rate,double time);
	
	cout << "Distance = " << distance(rate,time) << endl;
	
	cout << "Please enter years , months and weeks :";
	cin >> years >> months >> weeks;
	
	int days(int years,int months,int weeks);
	
	cout << "Days = " << days(years,months,weeks) << endl;
	
	return 0;
}


double distance(double rate,double time){
	double distance;
	distance = rate*time;
	
	return distance;
}

int days(int years, int months ,int weeks){
	int days;
	days = (years*365)+(months*30)+(weeks*7);
	
	return days;
}
