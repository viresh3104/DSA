// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

 

// Example:

// Input: nums = [2,2,1]
// Output: 1

// Input: nums = [4,1,2,1,2]
// Output: 4


#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> nums = {4,1,2,1,2};
    int ans = 0;
    for(int val:nums){
        ans ^= val;
    }
    cout << ans << endl;
}