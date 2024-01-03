#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    std::string id;
    std::string semester;
    std::string course;
    double cgpa;

public:
    Student(std::string name, std::string id, std::string semester, std::string course, double cgpa) {
        this->name = name;
        this->id = id;
        this->semester = semester;
        this->course = course;
        this->cgpa = cgpa;
    }

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

    // Creating two objects of the Student class
    Student student1("Modabbir Hasan Sazid", "384", "Summer 2023", "CSE", 3.92);
    Student student2("Rafiqul Islam", "890", "Fall 2023","ECSE",  3.85);

    // Printing student details
    std::cout << "Student 1 Details:" << std::endl;
    student1.StudentDetails();
    std::cout << std::endl;
    std::cout << "Student 2 Details:" << std::endl;
    student2.StudentDetails();

    return 0;
}