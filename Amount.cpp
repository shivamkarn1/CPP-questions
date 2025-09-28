#include <iostream>
#include <cmath>
using namespace std;

double calculate(double P, double r, double n)
{
  return P * pow((1 + r / 100), n);
}
int main()
{
  double P, r;
  int n;
  cout << "Enter Principle(P), Rate of interest(r): " << endl;
  cin >> P >> r;

  cout << "Enter the number of years : " << endl;
  cin >> n;

  double A = calculate(P, r, n);
  cout << "The answer is : " << A << endl;

  return 0;
}