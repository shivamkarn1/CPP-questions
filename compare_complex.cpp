#include <iostream>
using namespace std;
class Complex
{
private:
  double real, img;

public:
  Complex(double r = 0, double i = 0) : real(r), img(i) {}

  friend bool operator>(const Complex &c1, const Complex &c2);
  friend bool operator<(const Complex &c1, const Complex &c2);

  void show()
  {
    cout << real << " +i " << img << endl;
  }
};
bool operator>(const Complex &c1, const Complex &c2)
{
  if (c1.real > c2.real)
    return true;
  if (c1.real == c2.real && c1.img > c2.img)
    return true;
  return false;
}
bool operator<(const Complex &c1, const Complex &c2)
{
  if (c1.real < c2.real)
    return true;
  if (c1.real == c2.real && c1.img < c2.img)
    return true;
  return false;
}
int main()
{
  Complex c1(6, 7);
  Complex c2(6, 7);

  c1.show();
  c2.show();

  if (c1 > c2)
  {
    cout << "C1 is greater " << endl;
  }
  else if (c1 < c2)
  {
    cout << "C2 is greater " << endl;
  }
  else
  {
    cout << "Both are equal . " << endl;
  }
  return 0;
}
