#include <iostream>
using namespace std;

class Length
{
  double meter, centimeter;

public:
  Length(int m, int c)
  {
    meter = m;
    centimeter = c;
  }

  void display()
  {
    cout << "Meters : " << meter << ", Centimeters : " << centimeter << endl;
  }
  bool operator>(const Length &other)
  {
    int total1 = meter * 100 + centimeter;
    int total2 = meter * 100 + centimeter;
    return total1 > total2;
  }
};

int main()
{
  Length l1(2, 70);
  Length l2(3, 60);

  cout << "Length 1 is : ";
  l1.display();
  cout << "Length 2 is : ";
  l2.display();

  if (l1 > l2)
    cout << "l1 is greater";
  else
    cout << "l2 is graeter";

  return 0;
}
