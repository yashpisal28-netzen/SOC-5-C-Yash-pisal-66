#include &lt;iostream&gt;
using namespace std;

class Animal
{
protected:
int age;
};

class Dog : public Animal
{
public:
void setAge(int a)
{
age = a;
}

void displayAge()
{

cout &lt;&lt; &quot;Dog&#39;s Age = &quot; &lt;&lt; age &lt;&lt; &quot; years&quot; &lt;&lt; endl;
}
};

int main()
{
Dog d1;

// Setting age using derived class member function
d1.setAge(5);

// Displaying age
d1.displayAge();

return 0;