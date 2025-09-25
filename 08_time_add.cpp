#include <iostream>
using namespace std;
class Time
{
private:
  int hour, minute, second;

public:
  // Constructor
  Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}

  void addTime(Time t1, Time t2)
  {
    int second = t1.second + t2.second;
    int minute = t1.minute + t2.minute + (second / 60);
    second %= 60;
    int hour = t1.hour + t2.hour + (minute / 60);
    minute %= minute;
  }

  void display()
  {
    cout << "Hour : " << hour << endl;
    cout << "Minute : " << minute << endl;
    cout << "Second : " << second << endl;
  }
};

int main()
{
  Time t1(60, 70, 10);
  Time t2(30, 40, 20);
  Time t3;
  t3.addTime(t1, t2);

  t3.display();
  return 0;
}
