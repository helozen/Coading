#include <iostream>

using namespace std;

class Employee {
  public:
    string name;
    int id;
    string dept;
    Employee(string x, int y, string z);
};

Employee::Employee(string x, int y, string z) {
  name = x;
  id = y;
  dept = z;
}

int main() {
  Employee Obj1("Simon", 1811, "CSE");
  Employee Obj2("Rumman", 1911, "CSE");

  cout << Obj1.name << " " << Obj1.id << " " << Obj1.dept << "\n";
  cout << Obj2.name << " " << Obj2.id << " " << Obj2.dept << "\n";
  return 0;
}
