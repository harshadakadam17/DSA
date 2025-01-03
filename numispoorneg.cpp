#include <iostream>
using namespace std;

int main()
{

    // while (n <= 5)
    // {
    //     cout << n<<'\n';
    //     n += 1;
    // }

    // for(int i=1;i<=5;i++)
    // {
    //     cout<<i<<"\n";
    // }

    // int n = 5;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout << sum;

    int num = 5;
    int sum = 0;

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << sum;

    return 0;
}