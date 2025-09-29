#include <iostream>
using namespace std;
class Student
{
protected:
  int rollNO;

public:
  void readRollNo()
  {
    cout << "Enter roll no: " << endl;
    cin >> rollNO;
  }
  void displayRollNo()
  {
    cout << "ROll number is : " << rollNO << endl;
  }
};
class Test : public Student
{
protected:
  int marks1, marks2;

public:
  void readMarks()
  {
    cout << "Enter Marks for 1st subject : " << endl;
    cin >> marks1;
    cout << "Enter marks for 2nd subject : " << endl;
    cin >> marks2;
  }
  void displayMarks()
  {
    cout << "Marks of subject 1 is : " << marks1 << endl;

    cout << "Marks of subject 2 is : " << marks2 << endl;
  }
};
class Result : public Test
{
private:
  int total;

public:
  void displayTotal()
  {
    total = marks1 + marks2;
    cout << "Total makrs of both subjects is : " << total << endl;
    displayMarks();
    displayRollNo();
  }
};
int main()
{
  Result r1;
  r1.readRollNo();
  r1.readMarks();

  cout << "\n.........Student Result........\n";
  r1.displayTotal();
  return 0;
}