#include <iostream>
using namespace std;

class Animal
{
public:
  virtual void sound()
  {
    cout << "This is an animal sound." << endl;
  }
};

class Dog : public Animal
{
public:
  void sound() override
  {
    cout << "The dog barks." << endl;
  }
};

class Cat : public Animal
{
public:
  void sound() override
  {
    cout << "The cat meows." << endl;
  }
};

int main()
{
  Animal *a1 = new Dog();
  Animal *a2 = new Cat();

  a1->sound();
  a2->sound();

  delete a1;
  delete a2;

  return 0;
}
