#include <iostream>
using namespace std;

class MyClass
{
private:
  int value;

public:
  // Constructor to initialize value
  MyClass(int val) : value(val) {}

  // Method to set the value using the 'this' keyword
  void setValue(int val)
  {
    this->value = val;
  }

  // Method to get the value marked as 'const'
  int getValue() const
  {
    return value;
  }

  // Method to display the value
  void display() const
  {
    cout << "Value: " << value << endl;
  }

  ~MyClass()
  {
    cout << "Deleted" << endl;
  }
};

int main()
{
  // Creating an object using 'new'
  MyClass *obj = new MyClass(10);

  // Accessing member functions
  obj->display();

  obj->setValue(20);
  cout << "Updated Value: " << obj->getValue() << endl;

  // Deleting the dynamically allocated object
  delete obj;

  return 0;
}
