#include <iostream>
using namespace std;

class Cal
{
public:
  int add(int a, int b)
  {
    return a + b;
  }
  int add(int a, int b, int c)
  {
    return a + b + c;
  }
};

class Test
{
private:
  int num;

public:
  Test(int x) : num(x) {}

  void operator+()
  {
    num = num + 3;
  }

  void Print()
  {
    cout << "The Count is: " << num;
  }
};

int main(void)
{
  Cal C;
  cout << C.add(10, 20) << endl;
  cout << C.add(12, 20, 23) << endl;

  Test tt(9);
  +tt;
  tt.Print();

  return 0;
}