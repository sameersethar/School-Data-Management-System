#include <iostream> 
#include <string>
#include<limits>
#include<windows.h>
#include "Project_Library.h"
using namespace std;


int main () {
	int value;
	

	system("color e0");
	welcome();
	
	
		 for(int i=1;i<47;i++){cout<<"-";}
		 cout<<endl<<"|  SCHOOL DATA MANAGEMENT SYSTEM  |"<<endl;
		 for(int i=1;i<47;i++){cout<<"-";}
		 cout<<endl<<"\nNOTE: First You have to Provide/Enter Data of\n      Students Otherwise Project won't' work\n"<<endl;
		 for(int i=1;i<47;i++){cout<<"-";}
		 cout<<endl;

	
	do {
		
		
		do{
	
	
		cout<<"\nPress 1 to Add Data "<<endl;
		cout<<"Press 2 to Show Data "<<endl;
		cout<<"Press 3 to Search Data "<<endl;
		cout<<"Press 4 to Update Data "<<endl;
		cout<<"Press 5 to Delete Data "<<endl;
		cout<<"Press 6 to Exit "<<endl;
		cin>>value;
		system("cls");
	
	
            // Input validation for item selection
            if(cin.fail() || value<=0 || value>6 ) {
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout<<endl<<"Invalid input! Please enter a Number (1 to 6)."<<endl<<endl;
            } 
			else{
            	break; // Exit loop if valid input is entered
            }
        } while(true);
	
	
		switch (value) {
			case 1:
				enter();
				break;
			case 2:
				show();
				break;
			case 3:
		    	search();
				break;
			case 4:
				update();
				break;
			case 5:
		 		delet();
				break;			
			case 6:
				return 0;
			default:
				cout<<"Invalid Input, please ";	
		}   		
		
	}while (true);

	
 return 0;
}
