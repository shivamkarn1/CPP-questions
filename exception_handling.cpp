#include <iostream>
using namespace std;

int main()
{
  int a, b, index;
  int arr[] = {10, 20, 30, 40, 50};

  try
  {
    cout << "Enter two numbers (a and b) for division (a / b): ";
    cin >> a >> b;

    if (b == 0)
      throw "Division by zero error!";

    cout << "Result = " << a / b << endl;

    cout << "Enter index to access array element (0 to 4): ";
    cin >> index;

    if (index < 0 || index >= 5)
      throw index;

    cout << "Value at index " << index << " = " << arr[index] << endl;
  }

  catch (const char *msg)
  {
    cout << "Exception: " << msg << endl;
  }

  catch (int idx)
  {
    cout << "Exception: Invalid array index " << endl;
  }

  catch (...)
  {
    cout << "Exception: Unknown error occurred!" << endl;
  }

  return 0;
}
