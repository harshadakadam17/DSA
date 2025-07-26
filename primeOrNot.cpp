#include <iostream>

using namespace std;

int main()
{
    int number, i = 2;
    cout << "Enter Number to check if ot is prime or Composite :";
    cin >> number;

    while (i <= (number - 1))
    {
        if (number % i == 0)
        {
            cout << "Non Prime";
            break;
        }
        else
        {
            i++;
        }
    }

    if (i == number)
    {
        cout << "Prime";
    }
}