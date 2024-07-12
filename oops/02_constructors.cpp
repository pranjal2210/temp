#include <bits/stdc++.h>
using namespace std;

class Dummy
{
public:
  int a, b;
  char *name;

  // Constructor
  Dummy(int x, int y)
  {
    name = new char[100];
    this->a = x;
    this->b = y;
  }

  // Copy Constructor (deep copy)
  Dummy(Dummy &temp)
  {
    char *ch = new char[strlen(temp.name) + 1];
    strcpy(ch, temp.name);
    this->a = temp.a;
    this->b = temp.b;
    this->name = ch;
  }

  void display()
  {
    cout << a << " " << b << " " << name << endl;
  }

  void setName(char name[])
  {
    strcpy(this->name, name);
  }
};

int main()
{
  Dummy d1(12, 16);
  char name[6] = "Happy";
  d1.setName(name);
  d1.display();

  Dummy d2(d1);
  d2.display();

  d1.name[0] = 'P';
  d1.display();
  d2.display();

  return 0;
}