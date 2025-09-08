#include <iostream>
#include <math.h>
#include <climits> // for INT_MIN
using namespace std;

int main()
{
    int n;

    // Taking size of array as input
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Taking array elements as input
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int currentsum = 0, currentmax = INT_MIN;

    for (int val : arr)
    {
        currentsum += val;
        currentmax = max(currentsum, currentmax);
        if (currentsum < 0)
        {
            currentsum = 0;
        }
    }
    cout << "Maximum Subarray Sum = " << currentmax << endl;

    return 0;
}
