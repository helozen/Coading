#include<iostream>
using namespace std;

class Employee
{
    string name;
    int id;
    string dept;
    float salary;

    public:

    void setName(string Name){
        name = Name;
    }

    void setId(int Id){
        id = Id;
    }

    void setDept(string Dept){
        dept = Dept;
    }

    void setSalary(float Salary){
        salary = Salary;
    }

    string getName(){
        return name;
    }

    int getId(){
        return id;
    }

    string getDept(){
        return dept;
    }

    float getSalary(){
        return salary;
    }
};

int main()
{
    Employee e1;

    e1.setName("Simon");
    e1.setId(1811);
    e1.setDept("CSE");
    e1.setSalary(40.5);

    cout << "The Name is : " << e1.getName() << endl;
    cout << "The Id is : " << e1.getId() << endl;
    cout << "The Dept is : " << e1.getDept() << endl;
    cout << "The Salary is : " << e1.getSalary() << endl;

    return 0;
}
