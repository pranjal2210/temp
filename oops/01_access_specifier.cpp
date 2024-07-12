#include <iostream>
using namespace std;

class Base
{
private:
  int privateVar;

protected:
  int protectedVar;

public:
  int publicVar;

  Base(int x, int y, int z)
  {
    this->privateVar = x;
    this->protectedVar = y;
    this->publicVar = z;
  }

  // Friend function declaration
  friend void showPrivate(Base &obj);

  // Protected friend function declaration
  friend class FriendClass;
};

// Friend function definition
void showPrivate(Base &obj)
{
  cout << "Private variable: " << obj.privateVar << endl;
}


class Derived : public Base
{
public:
  Derived(int x, int y, int z) : Base(x, y, z) {}

  void showProtected()
  {
    // Can access protected member of the base class
    cout << "Protected variable: "<< protectedVar << endl;
  }

  void showPublic()
  {
    // Can access public member of the base class
    cout << "Public variable: " << publicVar << endl;
  }
};

class FriendClass
{
public:
  void showPrivateVar(Base &obj)
  {
    // Can access private member of Base class
    cout << "Private variable (from FriendClass): " << obj.privateVar << endl;
  }

  void showProtectedVar(Base &obj)
  {
    // Can access protected member of Base class
    cout << "Protected variable (from FriendClass): " << obj.protectedVar << endl;
  }

  void showPublicVar(Base &obj)
  {
    // Can access public member of Base class
    cout << "Public variable (from FriendClass): " << obj.publicVar << endl;
  }
};

int main()
{
  Base baseObj(10, 20, 30);
  Derived derivedObj(40, 50, 60);
  FriendClass friendObj;

  // Accessing public member directly
  cout << "Public variable (direct access): " << baseObj.publicVar << endl;

  // Accessing private member through friend function
  showPrivate(baseObj);

  // Accessing protected member through derived class
  derivedObj.showProtected();

  // Accessing public member through derived class
  derivedObj.showPublic();

  // Accessing private member through friend class
  friendObj.showPrivateVar(baseObj);

  // Accessing protected member through friend class
  friendObj.showProtectedVar(baseObj);

  // Accessing public member through friend class
  friendObj.showPublicVar(baseObj);

  return 0;
}
