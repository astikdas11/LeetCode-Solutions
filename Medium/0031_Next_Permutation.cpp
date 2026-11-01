#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;



//FUNCTION FOR LEETCODE SOLUTION
void nextPermutation(vector<int>& nums) {
    int piv=-1,n=nums.size();
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            piv=i;
            break;
        }
    }
    if(piv==-1){
        reverse(nums.begin(),nums.end());
        return;
    }

    for(int i=n-1;i>piv;i--){
        if(nums[i]>nums[piv]){
            swap(nums[i],nums[piv]);
            break;
        }
    }

    int i=piv+1,j=n-1;
    while(i<=j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
}




/*
Problem: Next Permutation
Platform: LeetCode
Problem Number: 31
Problem Link: https://leetcode.com/problems/next-permutation/
Difficulty: Medium
Topic: Array, Two Pointers, Greedy
Language: C++

Approach:
Find the next lexicographically greater permutation by locating
the rightmost position where the sequence increases, swapping
that element with the next larger element in the suffix, and
reversing the suffix to make it as small as possible.

Algorithm:

1. Initialize piv = -1 and n = nums.size().
2. Scan from right to left to find the first index i such that
   nums[i] < nums[i + 1]. Store i as the pivot.
3. If no pivot is found, the array is in descending order.
   Reverse the entire array and return.
4. Scan from the end to find the first element greater than
   nums[piv].
5. Swap that element with nums[piv].
6. Reverse the suffix after the pivot.
7. The array now contains the next lexicographically greater
   permutation.

Time Complexity: O(n)
Space Complexity: O(1)

Key Concepts:

- Lexicographical Ordering
- Greedy Algorithm
- Two Pointers
- In-place Array Reversal
- Permutation

Example:
Input: nums = [1, 2, 3]
Output: [1, 3, 2]

Explanation:
The next permutation after [1, 2, 3] is [1, 3, 2].

Another Example:
Input: nums = [3, 2, 1]
Output: [1, 2, 3]

Explanation:
The input is the largest possible permutation, so reversing
the array produces the smallest permutation.

Assumption:
The input is a valid permutation array as specified by the
standard LeetCode problem constraints.
*/