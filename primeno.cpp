#include <iostream>
using namespace std;

int main()
{
    int num = 4;
    bool isPrime = true;
    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "The num is prime";
    }
    else
    {
        cout << "The num is not prime";
    }

    return 0;
}