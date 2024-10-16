#include <iostream>
using namespace std;
void swap(int &, int &)
int main()
{
  int a, b;
  a = 3;
  b = 5;
  cout << "a is " << a << "and b is " << b;
  swap (a,b)
  cout << "a is " << a << "and b is " << b;
  return 0;
}

void swap(int &c, int &d)
{
  int hold;
  hold = c;
  c = d;
  d = hold;
  return;
}