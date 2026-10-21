#include<iostream>
#include<vector>
using namespace  std;


//FUNCTION FOR SEARCHING THE TARGET
int search(vector<int>& arr, int tar) {
    int st =0,end = arr.size()-1;
    while(st<=end){
        int mid = st +(end-st)/2;
        if(arr[mid]==tar){
            return mid;
        }
        if(arr[st]<=arr[mid]){
            if(arr[st]<=tar && tar <=arr[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{
            if(arr[mid]<=tar && tar<=arr[end]){
                st =mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}



//MAIN FUNCTION FOR PERSONAL TEEST CASES
int main(){
    vector<int>nums={4, 5, 6, 7, 0, 1, 2};
    int target =0;
    int position = search(nums,target);
    cout<<position;
}




/*
Problem: Search in Rotated Sorted Array
Platform: LeetCode
Problem Number: 33
Problem Link: https://leetcode.com/problems/search-in-rotated-sorted-array/
Difficulty: Medium
Topic: Arrays, Binary Search
Language: C++

Approach:
Use a modified binary search to search for the target in a
rotated sorted array. At each iteration, determine which
half of the array is sorted, then check whether the target
lies within that half. Eliminate the other half accordingly.

Algorithm:
1. Initialize two pointers: st = 0 and end = n - 1.
2. While st <= end, calculate the middle index.
3. If arr[mid] equals the target, return mid.
4. Check whether the left half is sorted:
   - If arr[st] <= arr[mid], the left half is sorted.
   - If the target lies between arr[st] and arr[mid],
     move end to mid - 1.
   - Otherwise, move st to mid + 1.
5. Otherwise, the right half is sorted:
   - If the target lies between arr[mid] and arr[end],
     move st to mid + 1.
   - Otherwise, move end to mid - 1.
6. If the target is not found, return -1.

Time Complexity: O(log n)
Space Complexity: O(1)

Key Concepts:
- Binary Search
- Rotated Sorted Arrays
- Two Pointers
- Search Space Reduction

Example:
Input: arr = [4, 5, 6, 7, 0, 1, 2], target = 0
Output: 4

Explanation:
The array is sorted and then rotated. The target 0 is
found at index 4 using modified binary search.

Assumption:
The array contains distinct integers and is sorted in
ascending order before rotation.
*/