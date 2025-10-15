#include <iostream>
using namespace std;
class Complex
{
private:
  double real, img;

public:
  // constructor
  Complex(double r = 0, double img = 0) : real(r), img(img) {}

  friend istream &operator>>(istream &in, Complex &c);
  friend ostream &operator<<(ostream &out, const Complex &c);
};

istream &operator>>(istream &in, Complex &c)
{
  cout << "\nEnter Real Part : \n";
  in >> c.real;
  cout << "\nEnter Imaginary Part : ";
  in >> c.img;
  return in;
}

ostream &operator<<(ostream &out, const Complex &c)
{
  out << c.real;
  if (c.img >= 0)
  {
    out << " + " << c.img << " i ";
  }
  else
  {
    out << " " << c.img << " i ";
  }
  return out;
}
int main()
{
  Complex c1;
  cout << "Enter you numnber !!";
  cin >> c1;
  cout << "The entered NUmber is : " << c1 << endl;
  return 0;
}