#include <windows.h>
#include <iostream>

using namespace std;

class Employee
{

	string  emp_name;
	int   emp_id;
	string  emp_dept;
        double emp_salary;

	public:
		void Get_emp_details();
		void Show_emp_details();
};

void Employee :: Get_emp_details()
{
	cout<<"\nEnter employee name: ";
	cin>>emp_name;
	cout<<"\nEnter employee id: ";
	cin>>emp_id;
	cout<<"\nEnter employee dept: ";
	cin>>emp_dept;
	cout<<"\nEnter employee salary: ";
	cin>>emp_salary;
}


void Employee :: Show_emp_details()
{
	cout<<"\n\n**** Details of  Employee ****";
	cout<<"\nEmployee Name      :  "<<emp_name;
	cout<<"\nEmployee id        :  "<<emp_id;
	cout<<"\nEmployee dept      :  "<<emp_dept;
	cout<<"\nEmployee salary    :  "<<emp_salary;
	cout<<"\n-------------------------------\n\n";
}


int main()
{
    Employee emp1;

    emp1.Get_emp_details();
    emp1.Show_emp_details();

    return 0;
}
