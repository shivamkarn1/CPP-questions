/*  What is Ambiguity in C++?
Ambiguity happens when the compiler can't decide which function to call because multiple overloaded functions match a given call, and it becomes confused. */

#include <iostream>
using namespace std;

void display(int a = 10)
{
  cout << "The value of a is : " << a << endl;
}
void display(float a, int b = 10)
{
  cout << "The values are : " << a << " and " << b << endl;
}

int main()
{
  display();
  display(67, 76);
  return 0;
}