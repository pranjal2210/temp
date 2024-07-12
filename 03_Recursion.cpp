#include <iostream>
using namespace std;

void print_n_times(int i, int n)
{
  if (i > n)
  {
    return;
  }

  cout << "Happy" << endl;
  print_n_times(++i, n);
}

void print_1_to_n(int i, int n)
{
  if (i > n)
  {
    return;
  }

  cout << i++ << endl;
  print_1_to_n(i, n);
}

void print_n_to_1(int n)
{
  if (n == 0)
  {
    return;
  }

  cout << n-- << endl;
  print_n_to_1(n);
}

void print_1_to_n_2(int i, int n)
{
  if (i < 1)
  {
    return;
  }

  print_1_to_n_2(i - 1, n);
  cout << i << endl;
}

void print_n_to_1_2(int i, int n)
{
  if (i > n)
  {
    return;
  }

  print_n_to_1_2(i + 1, n);
  cout << i << endl;
}

void print_sum_n(int i, int sum)
{
  if (i < 1)
  {
    cout << "Sum: " << sum;
    return;
  }

  print_sum_n(i - 1, sum + i);
}

int print_n_sum(int n)
{
  if (n < 1)
  {
    return 0;
  }
  return n + print_n_sum(n - 1);
}

int fact(int n)
{
  if (n < 1)
  {
    return 1;
  }
  return n * fact(n - 1);
}

int main()
{
  int n = 5;
  // print name n times
  print_n_times(1, n);
  cout << endl;
  // print 1 to n
  print_1_to_n(1, n);
  cout << endl;
  // print n to 1
  print_n_to_1(n);
  cout << endl;
  // print 1 to n (not using +1) (backtracking)
  print_1_to_n_2(n, n);
  cout << endl;
  // print n to 1 (not using -1) (backtracking)
  print_n_to_1_2(1, n);
  cout << endl;
  // print sum of n (parameterized)
  print_sum_n(n, 0);
  cout << endl;
  // print sum of n (functional)
  int sum = print_n_sum(n);
  cout << sum << endl;
  // print factorial of n
  int factorial = fact(n);
  cout << factorial << endl;

  return 0;
}