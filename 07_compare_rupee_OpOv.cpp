/* WAP to compare two amount in Rupee by overloading greater than > opertor using the concept of operator overloading.
 */
#include <iostream>
using namespace std;

class Rupee
{
private:
  int amount;

public:
  // Constructor
  Rupee(int r = 0) : amount(r) {}

  bool operator>(const Rupee &other)
  {
    return amount > other.amount;
  }

  // overloading << operator for output

  friend ostream &operator<<(ostream &out, const Rupee &r)
  {
    out << "Rs. " << r.amount;
    return out;
  }
  void show() const
  {
    cout << "Rs. " << amount << endl;
  }
};
int main()
{
  Rupee r(67);
  Rupee r1(6767);

  cout << "Comparing the following amounts : " << endl;
  r.show();
  r1.show();
  if (r > r1)
    cout << r << " is Greater. " << endl;
  else
    cout << r1 << " is Greater. " << endl;

  return 0;
}