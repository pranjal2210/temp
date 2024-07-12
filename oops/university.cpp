#include <bits/stdc++.h>
using namespace std;

class Person
{
private:
  string name;
  int age;

public:
  Person(string n, int a)
  {
    this->name = n;
    this->age = a;
  }

  string getName()
  {
    return name;
  }

  int getAge()
  {
    return age;
  }

  virtual string getRole() const
  {
    return "Person";
  }
};

class Student : public Person
{
private:
  int sid;
  string dept;

public:
  Student(string n, int a, int id, string d)
      : Person(n, a), sid(id), dept(d) {}

  void printDetails()
  {
    cout << "Student Name: " << getName() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Student ID: " << sid << endl;
    cout << "Dept: " << dept << endl;
  }

  void printDetails(bool includeAge)
  {
    cout << "Student Name: " << getName() << endl;
    if (includeAge)
      cout << "Age: " << getAge() << endl;
    cout << "Student ID: " << sid << endl;
    cout << "Dept: " << dept << endl;
  }

  string getRole() const override
  {
    return "Student";
  }
};

class Professor : public Person
{
private:
  string dept;
  int eid;

public:
  Professor(string n, int a, int id, string dep) : Person(n, a), dept(dep), eid(id) {}

  void printDetails()
  {
    cout << "Professor Name: " << getName() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Employee ID: " << eid << endl;
    cout << "Department: " << dept << endl;
  }

  void printDetails(bool includeAge)
  {
    cout << "Professor Name: " << getName() << endl;
    if (includeAge)
      cout << "Age: " << getAge() << endl;
    cout << "Employee ID: " << eid << endl;
    cout << "Department: " << dept << endl;
  }

  string getRole() const override
  {
    return "Professor";
  }
};

int main()
{
  // Person p1("Pranjal", 23);
  // Person p2("Ayushi", 22);

  // cout << "Name: " << p1.getName() << endl;
  // cout << "Age: " << p1.getAge() << endl;
  // cout << endl;
  // cout << "Name: " << p2.getName() << endl;
  // cout << "Age: " << p2.getAge() << endl;
  // cout << endl;

  Student student("Alice", 20, 1234, "Computer Science");
  Professor professor("Dr. Smith", 45, 5678, "Mathematics");

  // cout << "--- Student Info ---" << endl;
  // student.printDetails();
  // cout << endl;
  // cout << "--- Professor Info ---" << endl;
  // professor.printDetails();

  // Display details for Student and Professor without age
  cout << "--- Student Details Without Age ---" << endl;
  student.printDetails(false);
  cout << endl;
  cout << "--- Professor Details Without Age ---" << endl;
  professor.printDetails(false);

  cout << endl;
  cout << "Student's Role: " << student.getRole() << endl;
  cout << "Professor's Role: " << professor.getRole() << endl;

  return 0;
}