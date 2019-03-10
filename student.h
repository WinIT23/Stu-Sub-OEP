#ifndef MY_STUDENT
#define MY_STUDENT

#include<iostream>
#include<string>
#include<fstream>


class Student{
	private:
		int e_num,total_subjects;
		Subject* subjects = NULL;
		string name;
	
	public:
		void setData(){
			cout<<"Enter Students Name: ";
			cin>>name;

			cout<<"Enter Students Number: ";
			cin>>e_num;

			cout<<"Enter Students Total Subjects: ";
			cin>>total_subjects;

			subjects = new Subject[total_subjects];
		}	
		void show(){
			cout<<"Student Name: "<<name<<endl;
			cout<<"Enrollment Number: "<<e_num<<endl;
			cout<<"Total Subjects: "<<total_subjects;
		}

		void addSubjects();

		void saveData();
};

void Student::addSubjects(){
	Subject temp;
	for(int i=0;i<total_subjects;i++){
		cout<<"---Enter Subject Data -----"<<endl;
		temp.setSubject();
		subjects[i] = temp;
	}
};

void Student::saveData(){
//	string fileName = "Student_"+to_string(e_num)+".txt";
	ofstream oFile;
//	oFile.open(fileName);
	
	oFile.open("Students_Data.txt",std::ios_base::app);

	oFile << "Student Name   : "<<name<<endl;
	oFile << "Student Number : "<<e_num<<endl;
	oFile << "Student Total Subjects : "<<total_subjects<<endl;
	
	oFile<<endl;
	
	for(int i=0;i<total_subjects;i++){
		oFile<<"Subject Name: "<<subjects[i].getSubject_name()<<endl;
		oFile<<"Total Lectures: "<<subjects[i].getTotalLecs()<<endl;
		oFile<<"Attended Lectures: "<<subjects[i].getAttendence()<<endl;
		oFile<<"Percentage Attendence : "<<subjects[i].getPercentAttendence()<<"%"<<endl;
		oFile<<endl; // For other subject
	}
	oFile<<endl; // For New Data
	oFile.close();
	
}

#endif