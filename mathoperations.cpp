#include &lt;iostream&gt;
using namespace std;
class MathOperations {
private:
    int num1, num2;
public:
    void setValues(int a, int b) { // Defined INSIDE the class
        num1 = a;
        num2 = b;
    }
    int add();                  // Declared inside, defined OUTSIDE
    int multiply(int x, int y); // Declared inside, defined OUTSIDE as INLINE
};
// Member function defined OUTSIDE class
int MathOperations::add() {
    return num1 + num2;
}
// Inline member function defined OUTSIDE class
inline int MathOperations::multiply(int x, int y) {
    return x * y;
}
int main() {
    MathOperations math;
    math.setValues(10, 5);
    cout << "Addition: " << math.add() << endl;
    cout << "Multiplication: " << math.multiply(10, 5) << endl;
    return 0;
}