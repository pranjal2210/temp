#include <iostream>

using namespace std;

class Base
{
public:
  Base()
  {
    cout << "Base Constructor Called\n";
  }
  // Virtual Destructor
  virtual ~Base()
  {
    cout << "Base Destructor called\n";
  }
};

class Derived : public Base
{
public:
  Derived()
  {
    cout << "Derived constructor called\n";
  }
  ~Derived()
  {
    cout << "\nDerived destructor called\n";
  }
};

class Base2
{
public:
  Base2()
  {
    cout << "Base2 Constructor Called\n";
  }
  // Pure Virtual Destructor
  virtual ~Base2() = 0;
};

Base2::~Base2() // Explicit destructor call
{
  cout << "Pure virtual destructor is called";
}

// Initialization of derived class
class Derived2 : public Base2
{
public:
  Derived2()
  {
    cout << "Derived2 Constructor Called\n";
  }
  ~Derived2() { cout << "Derived2 Destructor Called\n"; }
};

int main()
{
  // Base *b = new Derived();
  // delete b;

  Base2 *b = new Derived2();
  delete b;

  return 0;
}