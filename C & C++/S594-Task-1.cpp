#include <windows.h>
#include <iostream>

using namespace std;

class Student
{
	string  stud_name;
	int   stud_id;
	string  stud_course;
    double stud_section;

	public:
		void Get_stud_details();
		void Show_stud_details();
};

void Student :: Get_stud_details()
{
	cout<<"\nEnter Student name: ";
	cin>>stud_name;
	cout<<"\nEnter Student id: ";
	cin>>stud_id;
	cout<<"\nEnter Student course: ";
	cin>>stud_course;
	cout<<"\nEnter Student section: ";
	cin>>stud_section;
}


void Student :: Show_stud_details()
{
	cout<<"\n\n***** Details of Student *****";
	cout<<"\nStudent Name      :  "<<stud_name;
	cout<<"\nStudent id        :  "<<stud_id;
	cout<<"\nStudent course    :  "<<stud_course;
	cout<<"\nStudent section   :  "<<stud_section;
	cout<<"\n-------------------------------\n\n";
}


int main()
{
    Student stud1;

    stud1.Get_stud_details();
    stud1.Show_stud_details();
	
    return 0;
}