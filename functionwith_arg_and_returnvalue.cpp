
// in this type the argument is there with return value

#include <iostream>

using namespace std;

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int result = multiply(5, 6);
    cout << "Multiplication is :" << result;
    return 0;
}