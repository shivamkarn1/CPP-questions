/* wap to create two class employee and student. Now create a class manager which is derived from two base classed employee
and student and a class secratary derived from employee. Show the use of virtual functoin*/

#include <iostream>
using namespace std;
class Employee
{

public:
  virtual void work()
  {
    cout << "Teacher is working ! " << endl;
  }
  virtual ~Employee()
  {
    cout << "\nVirtual Destructor of Employee class Called. " << endl;
  }
};
class Student
{
public:
  virtual void study()
  {
    cout << "Student is studying. " << endl;
  }
  virtual ~Student()
  {
    cout << "\nVirtual Destructor of Student class Called. " << endl;
  }
};

class Manager : public Employee, public Student
{
public:
  virtual void work() override
  {
    cout << "Manager is managing. " << endl;
  }
  virtual void study() override
  {
    cout << "Manager is studying how to Manage." << endl;
  }
  virtual ~Manager()
  {
    cout << "\nVirtual Destructor of Manager class Called. " << endl;
  }
};
class Secretary : public Employee
{
public:
  virtual void work() override
  {
    cout << "Secratary is doing Security ! " << endl;
  }
};
int main()
{

  // Employee *e1 = new Employee;
  // Student *s1 = new Student;
  // Employee *e2 = new Employee;

  // e1->work();
  // s1->study();

  // delete e1;
  // delete e2;

  // delete s1;

  Manager m1;
  Secretary s1;

  m1.study();
  m1.work();

  s1.work();

  Employee *e1 = new Employee;
  Employee *e2 = new Employee;

  e1 = &m1;
  e2 = &s1;

  e1->work(); // should call manager work;
  e2->work(); // should call secretary work

  delete e1;
  delete e2;
  return 0;
}