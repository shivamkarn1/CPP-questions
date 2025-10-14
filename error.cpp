// Meaningful program with error handling.
#include <iostream>
using namespace std;

int main()
{
  try
  {
    int a, b;
    cout << "Enter a and b : ";
    cin >> a >> b;

    if (b == 0)
      throw 0;
    if (a < 0)
      throw string("a must be positive");
    cout << "Division is : " << a / b << endl;
  }
  catch (int)
  {
    cout << "Error : Cannot divide by zerop";
  }
  catch (string s)
  {
    cout << "Error is : " << s << endl;
  }
  catch (...)
  {
    cout << "Unknown error occured . " << endl;
  }
  return 0;
}