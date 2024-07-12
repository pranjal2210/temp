#include <iostream>
using namespace std;

class Account
{
public:
  float salary = 60000;
  int add(int b)
  {
    int c = salary + b;
    return c;
  }
};

class Programmer : public Account
{
public:
  float bonus = 5000;
  void display()
  {
    cout << "Total : " << add(bonus) << endl;
  }
};

int main()
{
  Programmer p1;
  cout << "Salary: " << p1.salary << endl;
  cout << "Bonus: " << p1.bonus << endl;
  p1.display();
  return 0;
}