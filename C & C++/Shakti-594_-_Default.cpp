#include <iostream>

using namespace std;

class Student {
  public:
    string name;
    int id;
    string course;
    string section;
};

int main() {
  Student St1;
  St1.name = "Shakti ";
  St1.id = 0555;
  St1.course = "CSE ";
  St1.section = "B";

  Student St2;
  St2.name = "Zaber ";
  St2.id = 0444;
  St2.course = "CSE ";
  St2.section = "B ";

  cout << St1.name << St1.id << " " << St1.course << St1.section << "\n";
  cout << St2.name << St2.id << " " << St2.course << St2.section << "\n";
  return 0;
}