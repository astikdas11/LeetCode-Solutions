#include<iostream>
#include<vector>
using namespace std;

//FUNCTION FOR CALCULATE PRODUCT EXCEPT SELF
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n,1);
    
    //left product
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }

    //right product
    int rp=1;
    for(int i=n-2;i>=0;i--){
        rp*=nums[i+1];
        ans[i]*= rp;
    }

    return ans;
}


//MAIN FUNCTION FOR PERSONAL TEST CASES
int main(){
    vector<int> nums={1,2,3,4};
    vector<int> ans=productExceptSelf(nums);
    for(int i=0;i<nums.size();i++){
        cout<<ans[i]<<", ";
    }
}



/*
Problem: Product of Array Except Self
Platform: LeetCode
Problem Number: 238
Problem Link: https://leetcode.com/problems/product-of-array-except-self/
Difficulty: Medium
Topic: Arrays, Prefix and Suffix Products
Language: C++

Approach:
Calculate the product of all elements to the left of each
index, then multiply it by the product of all elements
to the right of that index.

Algorithm:
1. Initialize an answer vector with all elements set to 1.
2. Traverse from left to right and store the prefix product
   at each index.
3. Initialize a right product variable to 1.
4. Traverse from right to left, multiply each answer element
   by the product of elements to its right.
5. Update the right product at each step.
6. Return the answer vector.

Time Complexity: O(n)
Space Complexity: O(1) auxiliary space, excluding the output
vector.

Key Concepts:
- Prefix Products
- Suffix Products
- Array Traversal
- Space Optimization

Example:
Input: nums = [1, 2, 3, 4]
Output: [24, 12, 8, 6]

Note:
The solution does not use division and handles arrays
containing zeros according to the problem requirements.
The output vector is excluded from the auxiliary space
complexity calculation.
*/