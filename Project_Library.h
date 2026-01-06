
#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>


using namespace std;


int total = 0;

int studentNumber, rollnumber;
string names[100], roll_No[100], courses[100], classes[100], contact[100];
bool valid(string id);
void enter() {
	

	
	
	do {
    		cout<<"How many Students do you want to enter (numbers only): ";
			cin>>studentNumber;

            // Input validation for item selection
            if(cin.fail() || studentNumber<=0 ) {
                cin.clear(); // Reset the input error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid characters
                cout<<endl<<"Invalid input! Please enter a Numbers Only."<<endl;
            } 
			else{
            	break; // Exit loop if valid input is entered
            }
        } while(true);
	
	
	
	
	system("cls");
	if (total==0) {
		total+=studentNumber;
		
		
		for (int i=0; i<studentNumber; i++) {
			for(int i=1;i<34;i++){cout<<"-";}
			cout<<endl<<"    Enter data of Student "<<i + 1<<"     |"<<endl;
			for(int i=1;i<34;i++){cout<<"-";}
			cout<<endl<<"Enter Name    : ";
			fflush(stdin);
			getline(cin,names[i]);
	
			cout<<"Enter Roll No.: ";
			cin>>roll_No[i];
	
		
			fflush(stdin);
			cout<<"Enter Course  : ";
			fflush(stdin);
			getline(cin,courses[i]);
			cout<<"Enter Class   : ";
			fflush(stdin);
			getline(cin,classes[i]);
			cout<<"Enter Contact : ";
			cin>>contact[i];
			fflush(stdin);
			cout<<endl;
		}
		for(int i=1;i<34;i++){cout<<"-";}
		cout<<endl;
	}
	else {	
	
		for (int i=total; i<studentNumber+total; i++) {
		
			cout<<"    Enter data of Student of "<<i+1<<endl;
			
			for(int i=1;i<34;i++){cout<<"-";}
			cout<<endl;
			
			cout<<"Enter Name  : ";
			fflush(stdin);
			getline (cin, names[i]);
			cout<<"Enter Roll No.: ";
			cin>>roll_No[i];
			fflush(stdin);
			cout<<"Enter Course : ";
			fflush(stdin);
			getline(cin, courses[i]);
			cout<<"Enter Class  : ";
			fflush(stdin);
			getline(cin, classes[i]);
			cout<<"Enter Contact: ";
			cin>>contact[i];
			fflush(stdin);
			cout<<endl;
		}
			total+=studentNumber;
	}
}

void show() {
	
	
	cout<<"*********DATA OF REGISTERED STUDENTS*********\n";
	for (int i=0; i<total; i++) {
			for(int i=1;i<34;i++){cout<<"-";}
		cout<<endl<<"       Data of Student "<<i + 1<<"        |"<<endl;
		for(int i=1;i<34;i++){cout<<"-";}
		cout<<endl<<"Name    : "<<names[i] << endl;
		cout<<"Roll No.: "<<roll_No[i] << endl;
		cout<<"Course  : "<<courses[i] << endl;
		cout<<"Class   : "<<classes[i] << endl;
		cout<<"Contact : "<<contact[i] << endl;
		for(int i=1;i<34;i++){cout<<"-";}
		cout<<endl;
		
	}
}

void search() {
	string rollnum;
	bool found=false;
	system("cls");
		system("color b0");
	cout<<"Enter Roll No: of Student which you want to search: "<<endl;
	cin>>rollnum;
		
	for (int i=0;i<total; i++) {
	
		if (rollnum == roll_No[i]) {
			found=true;
			for(int i=1;i<30;i++){cout<<"-";}
			cout<<"\n      Data of student "<<i + 1<<"     |"<<endl;
			for(int i=1;i<30;i++){cout <<"-";}
			cout<<"\nName    : "<<names[i]<<endl;
			cout<<"Roll No.: "<<roll_No[i]<<endl;
			cout<<"Course  : "<<courses[i]<<endl;
			cout<<"Class   : "<<classes[i]<<endl;
			cout<<"Contact : "<<contact[i]<<endl;
			cout<<endl;
			for(int i=1;i<30;i++){cout<<"-";}
			break;
		}
	}
	if (!found) {
        cout<<"\nThis Roll Number is not in our School Data\n";
    }	
}
		
void update() {
	system("color 0b");
	string rollnum;
	bool found=false;
	cout<<"Enter Roll No. of Student which you want to Uptade: "<<endl;
	cin>>rollnum;
	system("cls");
	for (int i=0; i<total; i++) {
	
		if (rollnum==roll_No[i]) { 
			found=true;
		cout<<endl;
			
			cout<<endl<<"The previous data of Student "<<i + 1<<endl;
			for(int i=1;i<36;i++){cout<<"-";}
			cout<<"\n\tData of Student "<<i + 1<<"\t  |"<<endl;
			for(int i=1;i<36;i++){cout<<"-";}
			cout<<endl;
			cout<<"Name    : "<<names[i]<<endl;
			cout<<"Roll No.: "<<roll_No[i]<<endl;
			cout<<"Course  : "<<courses[i]<<endl;
			cout<<"Class   : "<<classes[i]<<endl;
			cout<<"Contact : "<<contact[i]<<endl<<endl;
			
			for(int i=1;i<36;i++){cout<<"-";}
			cout<<endl<<"Enter the new Data of Student "<<i + 1<<"\t  |"<<endl;
			for(int i=1;i<36;i++){cout<<"-";}
			
			cout<<endl<<"Enter Name   : ";
			fflush(stdin);
			getline (cin, names[i]);
			cout<<"Enter Roll No.: ";
			cin>>roll_No[i];
			fflush(stdin);
			cout<<"Enter Course  : ";
			fflush(stdin);
			getline(cin, courses[i]);
			cout<<"Enter Class   : ";
			fflush(stdin);
			getline (cin, classes[i]);
			cout<<"Enter Contact : ";
			cin>>contact[i];
			fflush(stdin);
			cout<<endl;
			break;	
	    }
	}
	if (!found) {
        cout<<"\nThis Roll Number is not in our School Data\n";
    }
}

void delet() {
	system("color 0e");
	int a; string rollnum; 
	bool found = false;
	cout<<endl<<"Press 1 to Delete whole record: "<<endl;
	cout<<"Press 2 to Delete specific record: "<<endl;
	cin>>a;
	
	
		if (a==1) {
			total=0;
			for(int i=1;i<34;i++){cout<<"-";}
		cout<<endl;
			cout<<"Whole record is Deleted "<<endl;
		} 
		else if (a==2) {
			cout<<"Enter Roll No: which you want to Delete : ";
			cin>>rollnum;			
					
			for (int i=0; i<total; i++) {
				if (rollnum==roll_No[i]) {
					found=true;
					
				for (int j=i;j<total-1; j++) {
						names[j] = names[j + 1];
						roll_No[j] = roll_No[j + 1];
						courses[j] = courses[j + 1];
						classes[j] = classes[j + 1];
						contact[j] = contact[j + 1];
					}
				    total--;
					cout<<"\nYour required report is Deleted " << endl;
					break;
			    }
			}
			if (!found) {
            	cout<<"\nYour Provided Roll No: isn't in our Data Base \n";
        	}
		}
	}

		
void welcome(){
cout<<"__        __      _                               "<<endl;
cout<<"\\ \\      / /__   | | _______  ________   ___     "<<endl;
cout<<" \\ \\ /\\ / / __ \\ | |/ __/ _ \\| '_ ` _ \\ / _ \\ "<<endl;
cout<<"  \\ V  V / /__/  | ||(__ (_) | | | | | |  __/   "<<endl;
cout<<"   \\_/\\_/\\_____  |_|\\___\\___/|_| |_|_|_|\\___|  "<<endl;
cout<<endl;
}
void exit() {

}



