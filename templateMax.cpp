#include<iostream>
using namespace std;

template<typename T>
T myMax(const T &a, const T &b){
  return (a > b) ? a : b;
}

template<typename T>
void mySwap(T &a, T &b){
  T temp = a;
  a = b;
  b  = temp;
}

int main(){
  int  s = 6 , t = 7;
  cout<<"Max Int is : " << myMax(s,t) << endl;

  double a = 6.67, b = 7.76;
  cout<<"Before swap : " << " a is : " << a << " and b is : " << b << endl;
   mySwap(a,b) ;
  cout<<"Swapped values are : "<< " a is " << a  << " b is : "<<b<< endl;


}