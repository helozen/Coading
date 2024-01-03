#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int id;
    int semester;
    std::string course;
    float cgpa;

public:
    // Parameterized constructor
    Student(const std::string& n, int i, int s, const std::string& c, float g) {
        name = n;
        id = i;
        semester = s;
        course = c;
        cgpa = g;
    }

    // Function to print student details
    void StudentDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "ID: " << id << std::endl;
        std::cout << "Semester: " << semester << std::endl;
        
        if (course == "ECSE") {
            std::cout << "CGPA: " << cgpa << std::endl;
        }
        
        std::cout << std::endl;
    }
};

int main() {
    std::string name, course;
    int id, semester;
    float cgpa;

    // Get input from user
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

    // Create objects using user input
    Student cseStudent(name, id, semester, course, cgpa);
    Student ecseStudent(name, id, semester, course, cgpa);

    // Print student details
    std::cout << "CSE Student Details:" << std::endl;
    cseStudent.StudentDetails();

    std::cout << "\nECSE Student Details:" << std::endl;
    ecseStudent.StudentDetails();

    return 0;
}
