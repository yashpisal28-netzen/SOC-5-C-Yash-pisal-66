#include<iostream>
using namespace std;
 
 class Animal
{
 public:

 void eat()
{
 cout<<"Animal eats"<<endl;
}
};
class Dog: public Animal
{
 public:
 
 void eat()
{
cout<<"Dog eats"<<endl;
}
};
 
 int main()
{
 Animal a;
 Dog d;
 a.eat();
 a.eat();
 return 0;
}
