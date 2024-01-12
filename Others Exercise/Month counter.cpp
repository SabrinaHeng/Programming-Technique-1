#include<iostream>
using namespace std;

int main(){
	int year;
	const int MONTHS = 12;
	int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	cout << "Enter year :";
	cin >> year;
	
	if(year%4==0){
		days[1] = 29;
		
	}else{
		days[1] = 28;
		
	}
	
	for(int count = 0;count < MONTHS;count++){
		cout << "Month " << (count+1);
		
		switch(count+1){
			
			case 1 : cout << " (January)";
					  break;
					  
			case 2 : cout << " (February)";
					  break;
					  
			case 3 : cout << " (March)";
					  break;
					  
			case 4 : cout << " (April)";
					  break;
					  
			case 5 : cout << " (May)";
					  break;
					  
			case 6 : cout << " (June)";
					  break;
					  
			case 7 : cout << " (July)";
					  break;
					  
			case 8 : cout << " (August)";
					  break;
					  
			case 9 : cout << " (September)";
					  break;
					  
			case 10 : cout << " (October)";
					  break;
					  
			case 11 : cout << " (November)";
					  break;	
					  
			case 12 : cout << " (December)";
					  break;
					  	  
		}
		
		cout <<" has " << days[count] << " days." <<endl;
		
	}
	
	return 0;
}
