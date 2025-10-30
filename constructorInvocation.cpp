// A program to show constructor and destructor invocation order 
#include<iostream>
using namespace std;

class Base{
  public:
  Base(){cout<<"Base class constructor \n";}
  ~Base(){cout<<"Base class destructor \n";}
};

class Intermediate : public Base{
  public:
    Intermediate(){cout<<"Intermediate class constructor \n";}
    ~Intermediate(){cout<<"Intermediate class destructor \n";}
};

class Derived : public Intermediate{
 public:
 Derived(){cout<<"Derived class Constructor \n";}
 ~Derived(){cout<<"Derived class Destructor \n";}
};

int main(){
  Derived d;

}

/* OUTPUT:
Base class constructor 
Intermediate class constructor 
Derived class Constructor 
Derived class Destructor 
Intermediate class destructor 
Base class destructor 


NOTE : CONSTRUCTOR CALL IS DONE UP TO DOWN , 
       DESTRUCTOR CALL IS DONE DOWN TO UP.
*/