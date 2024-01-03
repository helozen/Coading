#include<iostream>
using namespace std;

class Student
{
    string name;
    int id;
    string course;
    string section;

    public:

    void setName(string Name){
        name = Name;
    }

    void setId(int Id){
        id = Id;
    }

    void setCourse(string Course){
        course = Course;
    }

    void setSection(string Section){
        section = Section;
    }

    string getName(){
        return name;
    }

    int getId(){
        return id;
    }

    string getCourse(){
        return course;
    }

    string getSection(){
        return section;
    }
};

int main()
{
    Student s1;

    s1.setName("Shakti");
    s1.setId(594);
    s1.setCourse("Obj Ori Prog");
    s1.setSection("B");

    cout << "The Name is : " << s1.getName() << endl;
    cout << "The Id is : " << s1.getId() << endl;
    cout << "The Course is : " << s1.getCourse() << endl;
    cout << "The Section is : " << s1.getSection() << endl;

    return 0;
}
