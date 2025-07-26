#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <i; j++)
        {
            cout << " ";
        }
        for (int f = 0; f < 2 *n-(2*i + 1); f++)
        {
            cout << "*";
        }
        for (int j = 0; j <i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}