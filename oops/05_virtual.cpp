// C++ program to illustrate
// concept of Virtual Functions

#include <iostream>
using namespace std;

// Base class
class Base
{
public:
  // Virtual function
  virtual void show()
  {
    cout << "Base class show function called" << endl;
  }

  // Non-virtual function
  void display()
  {
    cout << "Base class display function called" << endl;
  }
};

// Derived class
class Derived : public Base
{
public:
  // Overriding the virtual function
  void show() override
  {
    cout << "Derived class show function called" << endl;
  }

  // Overriding the non-virtual function
  void display()
  {
    cout << "Derived class display function called" << endl;
  }
};

int main()
{
  Base *basePtr = new Derived;
  
  // Calling virtual function (demonstrates runtime polymorphism)
  basePtr->show();

  // Calling non-virtual function
  basePtr->display();

  return 0;
}