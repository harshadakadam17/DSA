#include <iostream>
using namespace std;

void print_pattern(int n)
{
    for (int i = 1; i <n; i++)
    {
        for (int j = 1; j <n-i+1; j++)
        {
            cout  << j<<" ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter N :";
    cin >> n;
    print_pattern(n);
    return 0;
}
