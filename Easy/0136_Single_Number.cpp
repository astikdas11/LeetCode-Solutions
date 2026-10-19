#include<iostream>
#include<vector>
using namespace std;


//FUNCTION FOR GETTING THE UNIQUE NUMBER
int singleNumber(vector<int>& nums) {
    int ans=0;
    for(auto x:nums)
    ans^=x;
    return ans;
}



//MAIN FUNCTION FOR PERSONAL TESTCASES
int main(){
    vector<int> nums={4,1,2,1,2};
    int ans =singleNumber(nums);
    cout<<ans;
}




/*
Problem: Single Number
Platform: LeetCode
Problem Number: 136
Problem Link: https://leetcode.com/problems/single-number/
Difficulty: Easy
Topic: Arrays, Bit Manipulation
Language: C++

Approach:
Use the XOR (^) bitwise operator to find the unique number.
Since XOR of a number with itself is 0, and XOR of any
number with 0 is the number itself, duplicate elements
cancel each other out, leaving the single number.

Algorithm:
1. Initialize a variable ans to 0.
2. Traverse every element in the array.
3. XOR each element with ans and update ans.
4. After processing all elements, return ans.

Time Complexity: O(n)
Space Complexity: O(1)

Key Concepts:
- Bit Manipulation
- Bitwise XOR
- Array Traversal

Example:
Input: nums = [4, 1, 2, 1, 2]
Output: 4

Explanation:
4 ^ 1 ^ 2 ^ 1 ^ 2
= 4 ^ (1 ^ 1) ^ (2 ^ 2)
= 4 ^ 0 ^ 0
= 4

Assumption:
Every element appears exactly twice except one element,
which appears exactly once.
*/