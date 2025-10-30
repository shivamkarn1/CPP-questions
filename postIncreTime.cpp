#include<iostream>
using namespace std;

class Time{
  private : 
  int hour, minute, seconds;
  public:
  // constructor
  Time(int h =0, int m = 0, int s = 0) : hour(h), minute(m), seconds(s){}

   void display() {
      cout << hour << ":" << minute << ":" << seconds << endl;
    }

    // int as an dummy for post increment
    Time operator ++(int){

      Time temp = *this;
      seconds ++;
      if(seconds >=60){
        seconds = 0;
        minute++;
      }
      if(minute >= 60){
        minute = 0;
        hour ++;
      }
      if(hour >=24){
        hour = 0;
      }
      return temp;
    }
};

int main(){
  Time t1(10,10,10);

  cout<<"Before increment \n";
  t1.display();

  t1++;
  cout<<"After increment \n";
  t1.display();


}