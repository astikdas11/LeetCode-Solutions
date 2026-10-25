#include<iostream>
#include<vector>
using namespace std;


//FUNCTION FOR SHORTING COLORS
void sortColors(vector<int> &nums){
    int n = nums.size();
    int mid = 0, low = 0, high = n - 1;

    while (mid <= high){
        if (nums[mid] == 0){
            swap(nums[low], nums[mid]);
            mid++;
            low++;
        }
        else if (nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}


//MAIN FUNCTION FOR PERSONAL TEST CASES
int main(){
    vector<int> nums={2,0,2,1,1,0};
    sortColors(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<", ";
    }
}




/*

Problem: Sort Colors
Platform: LeetCode
Problem Number: 75
Problem Link: https://leetcode.com/problems/sort-colors/
Difficulty: Medium
Topic: Arrays, Two Pointers, Sorting
Language: C++

Approach:
Use the Dutch National Flag algorithm to sort the array
in a single traversal. Maintain three pointers to divide
the array into regions containing 0s, 1s, and 2s.

Algorithm:
1. Initialize low = 0, mid = 0, and high = n - 1.
2. Traverse while mid <= high.
3. If nums[mid] == 0:
   - Swap nums[low] and nums[mid].
   - Increment low and mid.
4. If nums[mid] == 1:
   - Increment mid.
5. If nums[mid] == 2:
   - Swap nums[mid] and nums[high].
   - Decrement high without incrementing mid, because
     the swapped element still needs to be examined.
6. Continue until mid > high.

Time Complexity: O(n)
Space Complexity: O(1)

Key Concepts:
- Dutch National Flag Algorithm
- Three-Pointer Technique
- In-Place Sorting
- Single-Pass Array Traversal

Example:
Input: nums = [2, 0, 2, 1, 1, 0]
Output: [0, 0, 1, 1, 2, 2]

Explanation:
The algorithm groups all 0s first, followed by 1s,
and then 2s, without using an additional array.

Assumption:
The array contains only the values 0, 1, and 2.
*/