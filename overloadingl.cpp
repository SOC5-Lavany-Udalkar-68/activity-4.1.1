#include<iostream>
using namespace std;

  class Calculator
{
  public:
  int substract(int a , int b)
{
  return a-b;
}
  int substract(int a , int b , int c)
{
  return a-b-c;
}
};
  
  int main()
{
  Calculator c;
cout<<"The substraction 1 is:"<<c.substract(100,50)<<endl;
cout<<"The substraction 2 is:"<<c.substract(200,100,30)<<endl;
  return 0;
}
