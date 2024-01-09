#include<iostream>
using namespace std;

void getInput(double&,double&,double&);
void dispTier(int);
int calcAverage(int,int);
void dispSummary(int);

int main(){
	char input;
	double q1,q2,q3;
	double tot_Marks;
	string name,low_name,high_name;
	int average,total;
	int highest=0,lowest=100,count=1;
	do{
		cout << "<<<<<<<<<<<<< DATA >>>>>>>>>>>>>" << endl;
		cout << "Name :";
		getline(cin,name);
		
		if(name=="")
			break;
		getInput(q1,q2,q3);
		cout << endl;
		//change q1,q2,q3 and tot_Marks to double for calculation !!
		tot_Marks = (q1/100*35)+(q2/100*25)+(q3/100*40);
		dispSummary(tot_Marks);
		if(highest<tot_Marks){
			highest = tot_Marks;
			high_name = name;
		}
		if(lowest>tot_Marks){
			lowest = tot_Marks;
			low_name = name;
		}
		count ++;		
		total +=tot_Marks;
		cin.ignore();
	}while(name != "");
	average = calcAverage(count,total);
	cout << endl;
	cout << "<<<<<<< RESULT ANALYSIS >>>>>>>" << endl;
	cout << "Lowest mark  : " << lowest << "(" << low_name << ")\n";
	cout << "Highest mark : " << highest << "(" << high_name << ")\n";
	cout << "Average for " << count-1 << " students : " << average;
return 0;
}

void getInput(double &q1,double &q2,double &q3){
	cout << "Q1 marks :";
	cin >> q1;
	cout << "Q2 marks :";
	cin >> q2;
	cout << "Q3 marks :";
	cin >> q3;
	
}

void dispTier(int tot_Marks){
	if(tot_Marks < 40){
		cout << "Tier 3" << endl;
	}else if(tot_Marks < 75){
		cout << "Tier 2" << endl;
	}else{
		cout << "Tier 1" << endl;
	}
}

int calcAverage(int student,int total){
	double average = total/(student-1);
	return average;
}

void dispSummary(int tot_Marks){
	cout << "<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>>>" << endl;
	cout << "Total marks : " << tot_Marks << endl;
	cout << "Tier : ";
	dispTier(tot_Marks);
	cout << endl;
}
