#include <iostream>
using namespace std;
int main()
{
  int num;
  cout << "Enter a number; ";
  cin >> num;

  try
  {
    if (num < 0)
    {
      throw num;
    }
    int square = num * num;
    cout << "Square of the Number " << num << " is  : " << square << endl;
    return num * num;
  }
  catch (int x)
  {
    cout << "Error: Negative numbers square are not allowed." << '\n';
  }

  return 0;
}