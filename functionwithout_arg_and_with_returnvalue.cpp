#include <iostream>

using namespace std;

int getnum()
{
    int num = 5;
    return num;
}

int main()
{
    int x = getnum();
    cout << "Number is :" << x;
    return 0;
}