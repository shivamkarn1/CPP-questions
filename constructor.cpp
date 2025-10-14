// #include <iostream>
// using namespace std;
// class base
// {
// public:
//   // base()
//   // {
//   //   cout << " Default constructor from BASE class " << endl;
//   // }
//   base(int data)
//   {
//     cout << " Parameterized constructor from BASE class " << endl;
//   }
// };
// class derived : public base
// {
// public:
//   // derived()
//   // {
//   //   cout << " Default constructor of DERIVED CLASS " << endl;
//   // }
//   derived(int data) : base(data)
//   {
//     cout << " parameterized constructor from DERIVED Class" << endl;
//   }
// };
// int main()
// {
//   derived d(6);
//   return 0;
// }

#include <iostream>
using namespace std;
class base_one
{
public:
  base_one() { cout << "Base_one constructor" << endl; }
};
class base_two
{
public:
  base_two() { cout << "Base_two constructor" << endl; }
};
class derived : public base_one, public base_two
{
public:
  derived() { cout << "Derived constructor" << endl; }
};

int main()
{
  derived d;
  return 0;
}