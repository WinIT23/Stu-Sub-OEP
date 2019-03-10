#ifndef MY_SUBJECT
#define MY_SUBJECT

#include<iostream>
#include<string>

using namespace std;

class Subject{
	private:
		float total,attended,percent;
		string sub_name;

	public:
		void setSubject(){
			cout<<"Enter Name of Subject: ";
			cin>>sub_name;

			cout<<"Enter Total Lectures: ";
			cin>>total;

			cout<<"Enter Number of Lectures attended: ";
			cin>>attended;
		
			percent = (attended/total) * 100;
		}

		void show(){
			cout<<"Name of subject   : "<<sub_name<<endl;
			cout<<"Total Lectures    : "<<total<<endl;
			cout<<"Attended Lectures : "<<attended<<endl;
			cout<<endl;
		}

		string getSubject_name(){
			return sub_name;
		}

		float getTotalLecs(){
			return total;
		}

		float getAttendence(){
			return attended;
		}

		float getPercentAttendence(){
			return percent;
		}
};

#endif