#include <iostream>

using namespace std;

int main()
{
    int n;

    int sum = 0, count = 1;
    cout << "Enter value of n :";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum +=i;
        
    }

    cout << "Sum :" << sum;
}
