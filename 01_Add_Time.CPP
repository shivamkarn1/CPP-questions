// Withuot operator overloading.
#include <iostream>
class Time
{
private:
  int hour, minute, second;

public:
  // constructor
  Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}

  // function to add
  void add(Time t1, Time t2)
  {
    second = t1.second + t2.second;
    minute = t1.minute + t2.minute + (second / 60);
    second %= 60;
    hour = t1.hour + t2.hour + (minute / 60);
    minute %= 60;
  }

  void display()
  {
    std::cout << "Hour : " << hour << std::endl;
    std::cout << "minute : " << minute << std::endl;
    std::cout << "second : " << second << std::endl;
  }
};

int main()
{
  Time t1(24, 66, 10);
  Time t2(20, 40, 10);

  Time t3;
  // t3.add(t1, t2);
  t1.display();
  t2.display();
  t3.display();
  return 0;
}

// With operator overloading
#include <iostream>
class Time
{
private:
  int hour, minute, second;

public:
  // constructor
  Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}

  // function to add

  friend Time operator+(Time t1, Time t2);

  void display()
  {
    std::cout << "Hour : " << hour << std::endl;
    std::cout << "minute : " << minute << std::endl;
    std::cout << "second : " << second << std::endl;
  }
};

Time operator+(Time t1, Time t2)
{
  Time temp;

  temp.second = t1.second + t2.second;
  temp.minute = t1.minute + t2.minute + (temp.second / 60);
  temp.second %= 60;
  temp.hour = t1.hour + t2.hour + (temp.minute / 60);
  temp.minute %= 60;

  return temp;
}

int main()
{
  Time t1(24, 66, 10);
  Time t2(20, 40, 10);

  Time t3;
  // t3.add(t1, t2);
  t3 = t1 + t2;
  t1.display();
  t2.display();
  t3.display();
  return 0;
}
