#include <iostream>
using namespace std;
// void greet(string name)
// {
//   cout << "Hello  , " << name << endl;
// }
void greet(string name, string message = "Hi There")
{
  cout << message << ", " << name << endl;
}
int main()
{
  greet("Shivam");            // Hi There, Shivam
  greet("Shivam", "Welcome"); // Welcome, Shivam

  return 0;
}