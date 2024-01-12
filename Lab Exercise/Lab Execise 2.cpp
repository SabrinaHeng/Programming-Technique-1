//SABRINA HENG WEI QI
//A23CS0265
#include<iostream>
#include<cmath>
using namespace std;

void calculate_Distance(int = 1,int = 3,int = 2,int = 6,int = 5,int = 4); //function prototype
void display_Table(int = 1,int = 3,int = 2,int = 6,int = 5,int = 4);

int main(){
	string first = "A(1,3)",second = "B(2,6)",third = "C(5,4)"; //using string datatype
	cout << first << "," << second << ",and " << third << endl;
	
	display_Table(); //calling function
	calculate_Distance();
	
	return 0;
}

void display_Table(int x1,int y1,int x2,int y2,int x3,int y3){
	char a = 'A',b = 'B',c = 'C',x = 'x',y ='y'; //using char datatype
	int row = 4;
	
	for(int j=0;j<row;j++){ //using for loop to print each row
		if(j==0){
			cout << "\t"<< x << "\t" << y << endl;
			
		}else if(j==1){
			cout << a << "\t" << x1 << "\t" << y1 << endl;
			
		}else if(j==2){
			cout << b << "\t" << x2 << "\t" << y2 << endl;
			
		}else{
			cout << c << "\t" << x3 << "\t" << y3 << endl << endl;
			
		}
	}		
}

void calculate_Distance(int x1,int y1,int x2,int y2,int x3,int y3){
	double AB,AC,BC;
	
	AB = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2)); //distance formula
	cout << "AB = " << AB << endl;
	AC = sqrt(pow((x3 - x1),2) + pow((y3 - y1),2));
	cout << "AC = " << AC << endl;		
	BC = sqrt(pow((x3 - x2),2) + pow((y3 - y2),2));
	cout << "BC = " << BC << endl;
	
}
