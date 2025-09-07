#include <iostream>
#include <vector>
using namespace std;

// Function to find the single number
int singleNumber(vector<int>& nums) {
    int ans = 0;

    // XOR of all numbers
    for (int val : nums) {
        ans = ans ^ val;
    }

    return ans;
}

int main() {
    // Input array where every number appears twice except one
    vector<int> nums = {4, 1, 2, 1, 2};

    // Call function
    int result = singleNumber(nums);

    cout << "The single number is: " << result << endl;

    return 0;
}
