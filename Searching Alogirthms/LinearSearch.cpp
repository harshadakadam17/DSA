#include <iostream>

using namespace std;

int LinearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)

        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 4, 5, 8, 7, 6};
    int size = 6;

    int target = 6;

    int result = LinearSearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;
}