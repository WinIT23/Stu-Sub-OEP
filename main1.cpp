#include "Subject.h"
#include "Student.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool fexists(const char *filename) 
{
  std::ifstream ifile(filename);
  return (bool)ifile;
}

int main()
{
	
	int choice;
	if(fexists("Students_Data.txt")){
		cout<<"STUDENT MANAGEMENT SYSTEM"<<endl<<endl;
		do{
			cout<<"1.) Add New Student."<<endl;
			cout<<"2.) View Stduents."<<endl;
			cout<<"3.) Exit."<<endl;
			cout<<"Enter a choice: ";
			cin>>choice;

			switch(choice){
				case 1:{
					Student newStud;
					newStud.setData();
					newStud.addSubjects();
					newStud.saveData();

					break;
				}
				case 2:{
					string line;
				  ifstream myfile ("Students_Data.txt");

					while ( getline (myfile,line) ){
						cout << line << '\n';
					}
					myfile.close();
					break;
				}
				case 3:{
					cout<<"Good Bye";
					break;
				}
				default:{
					cout<<"Invalid Choice: ";
				}
			}
		}while(choice != 3);
	}
	else{
		Student* s;
		int total;
		
		cout<<"Enter total Students: ";
		cin>>total;
	
		s = new Student[total];
		
		for(int i=0;i<total;i++){
			cout<<"Enter Details for Student "<<i<<endl;
		
			Student temp;
			temp.setData();
			temp.addSubjects();
			temp.saveData();
	
			s[i] = temp;
		}
	}
}