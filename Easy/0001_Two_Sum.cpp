#include<iostream>
#include<vector>
#include<algorithm> //TO GET THE SORTING FUNCTION WORKED
using namespace std;


//FUNCTION FOR GETTING THE TWO SUM
vector<int> twoSum(vector<int>& nums, int target) {
    int str=0,end= nums.size()-1;
    vector<int> ans;
    vector<int> n=nums;
    sort(nums.begin(),nums.end());
    while(str<end){
        if(nums[str]+nums[end]==target){
            break;
        }
        else if(nums[str]+nums[end]<target){
            str++;
        }
        else{
            end--;
        }
    }
    for(int i=0;i<n.size();i++){
        if(n[i]==nums[str] || n[i]==nums[end]){
            ans.push_back(i);
        }
    }
    return ans;
}



//MAIN FUNCTIO FOR PERSONAL TEST CASES
int main(){
    vector<int> nums={2,7,11,15};
    int target=9;
    vector<int> ans=twoSum(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<", ";
    }
}





/*
Problem: Two Sum
Platform: LeetCode
Problem Number: 1
Problem Link: https://leetcode.com/problems/two-sum/
Difficulty: Easy
Topic: Arrays, Sorting, Two Pointers
Language: C++

Approach:
Sort the array and use two pointers to find two numbers
whose sum equals the target. Preserve a copy of the original
array to retrieve the indices of the selected numbers.

Algorithm:
1. Store a copy of the original array.
2. Sort the input array in ascending order.
3. Initialize two pointers: one at the beginning and
   another at the end of the sorted array.
4. Calculate the sum of the elements at both pointers.
5. If the sum equals the target, stop searching.
6. If the sum is less than the target, move the left
   pointer forward.
7. If the sum is greater than the target, move the right
   pointer backward.
8. Search the original array for the selected values and
   store their indices.
9. Return the indices.

Time Complexity: O(n log n)
Space Complexity: O(n)

Key Concepts:
- Arrays
- Sorting
- Two-Pointer Technique
- Searching for Original Indices

Example:
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]

Explanation:
nums[0] + nums[1] = 2 + 7 = 9.

Important Note:
This implementation can return incorrect indices when the
selected values are equal, because the index-searching loop
does not prevent the same element from being selected twice.
It also does not handle the case where no valid pair exists.
*/