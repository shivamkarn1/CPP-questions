#include <iostream>
using namespace std;

class Time2;  // Forward declaration

class Time1 {
    int h, m, s;
public:
    Time1(int h=0, int m=0, int s=0) : h(h), m(m), s(s) {}
    friend Time1 addTime(Time1, Time2);
    void display() { cout << h << " hr " << m << " min " << s << " sec"; }
};

class Time2 {
    int h, m, s;
public:
    Time2(int h=0, int m=0, int s=0) : h(h), m(m), s(s) {}
    friend Time1 addTime(Time1, Time2);
};

Time1 addTime(Time1 t1, Time2 t2) {
    Time1 temp;
    temp.s = t1.s + t2.s;
    temp.m = t1.m + t2.m + temp.s / 60;
    temp.h = t1.h + t2.h + temp.m / 60;
    temp.s %= 60; temp.m %= 60;
    return temp;
}

int main() {
    Time1 t1(2, 45, 50);
    Time2 t2(3, 30, 20);
    Time1 t3 = addTime(t1, t2);
    cout << "Total Time = ";
    t3.display();
    return 0;
}
