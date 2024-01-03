#include <iostream>
#include <string>
using namespace std;

class student {
public:
    string name;
    int id, semester;
    string course;
    double CGPA;

    student(const string& n, int i, int s, const string& c, float g) {
        name = n;
        id = i;
        semester = s;
        course = c;
        CGPA = g;
    }
    void StudentDetails() {
        if (course == "CSE") {
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Semester: " << semester << endl;
        }
        else if (course == "ECSE") {
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Semester: " << semester << endl;
            cout << "CGPA: " << CGPA << endl;
        }
    }
};
int main()
{
    string name, course;
    int id, semester;
    double CGPA;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter ID: ";
    cin >> id;

    cout << "Enter semester: ";
    cin >> semester;

    cout << "Enter course (CSE or ECSE): ";
    cin >> course;

    cout << "Enter CGPA: ";
    cin >> CGPA;

    student cseStudent(name, id, semester, course, CGPA);
    student ecseStudent(name, id, semester, course, CGPA);

    if (course == "CSE"){
    cout << "\nCSE Student Details:" << endl;
    cseStudent.StudentDetails();
    }

    else if (course == "ECSE"){
    cout << "\nECSE Student Details:" << endl;
    ecseStudent.StudentDetails();
    }
    
    return 0;
}