#include<iostream>
using namespace std;
 class Calculator
{
  public:
  int Addition(int a,int b)
{
  return a+b;
}
  int Addition(int x,int y,int z)
{
  return x+y+z;
}
};

 int main()
{
 Calculator c;
cout<<"the addition of 1 is:"<<c.Addition(20,30)<<endl;
cout<<"the addition of 2 is:"<<c.Addition(50,40,10)<<endl;
 return 0
}
