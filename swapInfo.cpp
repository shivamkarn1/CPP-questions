#include<iostream>
using namespace std;

class StudentInfo{
  private:
  string name;
  string address;
  public:
  // default constructor
  StudentInfo() : name(""), address(""){}

  // parameterized constructor
  StudentInfo(const string &n, const string &a) : name(n)  , address(a){}
  // copy constructor  
  StudentInfo(const StudentInfo &other) : name(other.name), address(other.address){}

  void display(){
    cout<<"Name : " << name << "Address : " << address << endl;
  }

  friend  void swapStudentInfo( StudentInfo &s1,  StudentInfo &s2);
};

 void swapStudentInfo( StudentInfo &s1,  StudentInfo &s2){
  string tempName = s1.name;
  s1.name = s2.name;
  s2.name = tempName;

  // swap address 
  string tempAddress = s1.address ;
  s1.address = s2.address;
  s2.address = tempAddress;
}

int main(){
  StudentInfo s1("Shivam Karn","Bardibas");
  StudentInfo s2("ShivK.","TS");

  cout<<"Before swap ... \n";
  s1.display();
  s2.display();

  swapStudentInfo(s1,s2);

  cout<<"After swap ... \n";
  s1.display();
  s2.display();


}