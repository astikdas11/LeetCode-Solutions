#include<iostream>
#include<vector>
using namespace std;


//FUNCTION FOR REMOVE THE TARGATED ELEMENT
int removeElement(vector<int>& nums, int val) {
    int count=0;
    for(int i=nums.size()-1;i>=0;i--){
        if(nums[i]==val){
            swap(nums[i],nums.back());
            nums.pop_back();
        }
        else{
            count ++;
        }
    }
    return count;
}




//MAIN FUNCTION FOR PERSONAL TEST CASES
int main(){
    vector<int> nums = {3, 2, 2, 3}; 
    int val = 3;
    int ans=removeElement(nums,val);
    cout<<ans;
}





/*
Problem: Remove Element
Platform: LeetCode
Problem Number: 27
Problem Link: https://leetcode.com/problems/remove-element/
Difficulty: Easy
Topic: Array, Two Pointers
Language: C++

Approach:
Remove all occurrences of `val` from the array in-place.
Scan the array from right to left. When an element equals
`val`, swap it with the last element and remove the last
element using pop_back(). Count the elements that are kept.

Algorithm:

1. Initialize count = 0.
2. Traverse nums from the last index to the first.
3. If nums[i] == val:
   - Swap nums[i] with the last element.
   - Remove the last element using pop_back().
4. Otherwise, increment count.
5. Return count, which is the number of elements not equal to val.

Time Complexity: O(n)
Space Complexity: O(1)

Key Concepts:

- In-place Array Modification
- Two Pointers / Reverse Traversal
- Swapping
- Vector pop_back()

Example:
Input: nums = [3, 2, 2, 3], val = 3
Output: 2

Explanation:
The two occurrences of 3 are removed from the array's
effective range. The first two elements contain the values
that are not equal to val.

Assumption:
The input follows the standard LeetCode constraints.
The order of the remaining elements does not need to be preserved.
*/