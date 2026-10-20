#include<iostream>
#include<vector>
using namespace std;


//FUNCTION FOR FIND AND RETURN THE MISSING NUMBER
int missingNumber(vector<int>& nums) {
    int n = nums.size() , i = 0;
    while(i < n){
        int j = nums[i];
        if (nums[i] >= 0 && nums[i] < n && nums[i] != nums[j])
            swap(nums[i],nums[j]);
        else i++;
    }
    for (int i = 0 ; i < n ; i++)
        if (nums[i] != i) return i;
    return n;
}


//MAIN FUNCTION FOR PERRSONAL TESTCASES
int main(){
    vector<int> nums={9,6,4,2,3,5,7,0,1};
    int n= missingNumber(nums);
    cout<<n;
}




/*
Problem: Missing Number
Platform: LeetCode
Problem Number: 268
Problem Link: https://leetcode.com/problems/missing-number/
Difficulty: Easy
Topic: Arrays, Cyclic Sort, Index Placement
Language: C++

Approach:
Use the Cyclic Sort technique to place each number at the
index matching its value. Since the array contains distinct
numbers from the range [0, n], exactly one number is missing.
After placing all valid numbers, the first index that does
not contain its corresponding value is the missing number.

Algorithm:
1. Initialize n as the size of the array and i = 0.
2. Traverse the array while i < n.
3. Let j = nums[i].
4. If nums[i] is within the valid index range [0, n-1]
   and nums[i] is not already at its correct index,
   swap nums[i] with nums[j].
5. Otherwise, increment i.
6. Traverse the array from index 0 to n-1.
7. If nums[i] != i, return i.
8. If every element is at its correct index, return n.

Time Complexity: O(n)
Space Complexity: O(1) auxiliary space

Key Concepts:
- Cyclic Sort
- In-Place Array Modification
- Index Placement
- Array Traversal

Example:
Input: nums = [3, 0, 1]
Output: 2

Explanation:
After cyclic sorting, the array becomes [0, 1, 3].
Index 2 does not contain the value 2, so the missing
number is 2.

Important Note:
This algorithm modifies the input array in place.
It assumes that nums contains distinct integers from
the range [0, n], with exactly one number missing.
*/