
#include <iostream>
using namespace std;

// static variables inside a class
class GfG1
{
public:
  static int i;

  GfG(){
      // Do nothing
  };
};

int GfG1::i = 1;

// class objects as static
class GfG2
{
  int i = 0;

public:
  GfG2()
  {
    i = 0;
    cout << "Inside Constructor GFG2\n";
  }

  ~GfG2() { cout << "Inside Destructor GFG2\n"; }
};

// member function in a class
class GfG3
{
public:
  static void printMsg() { cout << "Welcome to GfG!\n"; }
};

int main()
{
  GfG1 obj1;
  cout << obj1.i << endl;

  static GfG2 obj2;

  GfG3::printMsg();
}
