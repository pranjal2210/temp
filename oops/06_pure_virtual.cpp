#include <iostream>
using namespace std;

// class Base final {}
// Sometimes you don’t want to allow derived class to override the base class’ virtual function. C++ 11 allows built-in facility to prevent overriding of virtual function using final specifier.

// Abstract Base class
class Base
{
public:
  // Pure virtual function
  virtual void show() = 0;

  void display()
  {
    cout << "Base class display function called" << endl;
  }
};

// Derived class
class Derived : public Base
{
public:
  // Overriding the pure virtual function
  void show() override
  {
    cout << "Derived class show function called" << endl;
  }
};

int main()
{
  // We cannot create an object of the abstract class
  // Base baseObj; // This would cause a compile-time error

  // Base class pointer pointing to derived class object
  Base *basePtr = new Derived;

  // Calling the overridden function
  basePtr->show();

  // Calling the non-virtual function
  basePtr->display();

  return 0;
}
