#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int id;
    int semester;
    std::string course;
    double cgpa;

public:
    Student(const std::string& n, int i, int s, const std::string& c, double g)
        : name(n), id(i), semester(s), course(c), cgpa(g) {}

    void StudentDetails() {
        if (course == "CSE") {
            std::cout << "Name: " << name << std::endl;
            std::cout << "ID: " << id << std::endl;
            std::cout << "Semester: " << semester << std::endl;
        } else if (course == "ECSE") {
            std::cout << "Name: " << name << std::endl;
            std::cout << "ID: " << id << std::endl;
            std::cout << "Semester: " << semester << std::endl;
            std::cout << "CGPA: " << cgpa << std::endl;
        }
    }
};

int main() {
    std::string name, course;
    int id, semester;
    float cgpa;

    std::cout << "Enter name: ";
    std::cin >> name;

    std::cout << "Enter ID: ";
    std::cin >> id;

    std::cout << "Enter semester: ";
    std::cin >> semester;

    std::cout << "Enter course (CSE or ECSE): ";
    std::cin >> course;

    std::cout << "Enter CGPA: ";
    std::cin >> cgpa;

    Student cseStudent(name, id, semester, course, cgpa);
    Student ecseStudent(name, id, semester, course, cgpa);

    std::cout << "CSE Student Details:" << std::endl;
    cseStudent.StudentDetails();

    std::cout << "\nECSE Student Details:" << std::endl;
    ecseStudent.StudentDetails();

    return 0;
}