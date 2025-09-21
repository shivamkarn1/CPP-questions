#include <iostream>
class Length
{
private:
  int meter, cm;

  void normalize()
  {
    meter = meter + cm / 100;
    cm = cm % 100;
  }

public:
  // Constructor
  Length(int m = 0, int cm = 0) : meter(m), cm(cm)
  {
    normalize();
  }
  bool operator>(Length other)
  {
    if (this->meter > other.meter)
    {
      return true;
    }
    else if (this->meter == other.meter && this->cm > other.cm)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  void display()
  {
    std::cout << "length in meter : " << meter << std::endl;
    std::cout << "length in cm : " << cm << std::endl;
  }
};

int main()
{
  Length l1(100, 10);
  Length l2(10, 100);

  std::cout << "length 1 is : " << std::endl;
  l1.display();

  std::cout << "Length 2 is : " << std::endl;
  l2.display();

  if (l1 > l2)
    std::cout << "Length 1 is Greater" << std::endl;
  else
    std::cout << "Length 2 is Greter " << std::endl;
  return 0;
}