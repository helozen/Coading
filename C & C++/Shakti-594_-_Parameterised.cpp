#include <iostream>

using namespace std;

class Student {
  public:
    string name;
    int id;
    string course;
    string section;
    Student(string a, int b, string c, string d);
};

Student::Student(string a, int b, string c, string d) {
  name = a;
  id = b;
  course = c;
  section = d;
}

int main() {
  Student St1("Shakti ", 300594, "CSE ", "B");
  Student St2("Zaber ", 300480, "CSE ", "B");

  cout << St1.name << St1.id << " " << St1.course << St1.section << "\n";
  cout << St2.name << St2.id << " " << St2.course << St2.section << "\n";
  return 0;
}
