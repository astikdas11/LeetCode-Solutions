#include<iostream>
#include<vector>
using namespace std;


//FUNCTION  FOR THE SOLUTION
int searchInsert(vector<int>& nums, int target) {
    int st = 0, en = nums.size() - 1;

    while (st <= en) {
        int mid = st + (en - st) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            st = mid + 1;
        } else {
            en = mid - 1;
        }
    }

    return st;
}


//MAIN FUNCTION FOR PROSONAL USECASES
int main(){
    vector<int> nums={1,3,5,6};
    int target =5;
    int ans=searchInsert(nums,target);
    cout<<ans;
}




/*
Problem: Search Insert Position
Platform: LeetCode
Problem Number: 35
Problem Link: https://leetcode.com/problems/search-insert-position/
Difficulty: Easy
Topic: Array, Binary Search
Language: C++

Approach:
Use binary search on the sorted array to find the target.
If the target exists, return its index. Otherwise, return the
index where it should be inserted to maintain sorted order.

Algorithm:

1. Initialize st = 0 and en = nums.size() - 1.
2. While st <= en:
   - Calculate mid = st + (en - st) / 2.
   - If nums[mid] == target, return mid.
   - If nums[mid] < target, search the right half by setting
     st = mid + 1.
   - Otherwise, search the left half by setting en = mid - 1.
3. If the target is not found, st is its correct insertion index.
4. Return st.

Time Complexity: O(log n)
Space Complexity: O(1)

Key Concepts:

- Binary Search
- Sorted Arrays
- Search Insertion Index
- Boundary Updates

Example:
Input: nums = [1, 3, 5, 6], target = 5
Output: 2

Explanation:
The target 5 is present at index 2.

Another Example:
Input: nums = [1, 3, 5, 6], target = 2
Output: 1

Explanation:
The target 2 is not present. Inserting it at index 1
produces [1, 2, 3, 5, 6].

Assumption:
The input array is sorted in non-decreasing order, as specified
by the standard LeetCode problem constraints.
*/