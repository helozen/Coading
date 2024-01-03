#include<iostream>
using namespace std;

class Student
{
public: 
    int id;
    string name;
    string fatherName;

    Student(){
        id=12345;
        name="David";
        fatherName="Sumon Mia";
    }

    void printStudentDetails(){
        cout << "I am " << name << "My Student ID is " << id << endl;
    }

    void printFatherDetails(){
        cout << "My fathers name " << fatherName << endl;
    }
};

int main(){
    Student student1;
    Student student2;

    student1.printStudentDetails();
    student1.printFatherDetails();

    student2.id=12567;
    student2.name="Jack ";
    student2.fatherName="Mychel ";

    student2.printStudentDetails();
    student2.printFatherDetails();

}