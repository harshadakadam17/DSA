#include <iostream>
using namespace std;

int main() {
    int n;

    // Taking size of array as input
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Taking array elements as input
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Assume the first element is the smallest
    int Largest = arr[0];
    // Compare with remaining elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > Largest) {
            Largest = arr[i];
        }
    }

    // Display result
    cout << "The Largest element is: " << Largest << endl;

    return 0;
}
