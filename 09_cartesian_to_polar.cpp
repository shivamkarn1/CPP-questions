/* You have a data type in cartesian and another data type in polar coordinate Cartesian coordinate belong to cartesian and polar belongs to polar class . WAP to convert cartesian to polar Your conversion code must in destination class. */

#include <iostream>
#include <cmath>
using namespace std;
class Cartesian
{
public:
  double x, y;

public:
  Cartesian(double x_val = 0, double y_val = 0) : x(x_val), y(y_val) {}

  void display()
  {
    cout << "Cartesian Coordinates are : " << x << " and " << y << endl;
  }
};
class Polar
{
private:
  float r, theta;

public:
  Polar(float r = 0, float theta = 0) : r(r), theta(theta) {}

  // Conversion constructor from carteesian to polar
  Polar(Cartesian c)
  {
    r = sqrt(c.x * c.x + c.y * c.y);
    theta = atan2(c.y, c.x) * 180 / 3.14;
  }
  void display()
  {
    cout << "Polar Coordinates are : " << "( r = " << r << " , " << " theta = " << theta << " ) " << endl;
  }
};

int main()
{
  Cartesian c(3, 4);
  c.display();

  Polar p = c;
  p.display();
}