#include<iostream>
#include<vector>
using namespace std;


//FUNCTION TO SUBMIT IN LEETCODE
int singleNonDuplicate(vector<int>& a) {
    int ans,st=0,end=a.size()-1;
    if(a.size()==1) return a[0];
    while(st<=end){
        int mid = st + (end-st)/2;
        if(mid==0 &&  a[mid]!=a[mid+1]) return a[mid];
        if(mid==a.size()-1 &&  a[mid]!=a[mid-1]) return a[mid];
        if(a[mid]!=a[mid-1] && a[mid]!=a[mid+1]){
            return a[mid];
        }
        if(mid%2==0){
            if(a[mid-1]==a[mid]){
                end=end-1;
            }
            else{
                st=mid+1;
            }
        }else{
            if(a[mid-1]==a[mid]){
                st=mid+1;
                
            }
            else{
                end=end-1;
            }
        }
    }
    return -1;
}




//MAIN FUNCTION FOR PERSONAL TESTCASES
int main(){
    vector<int> a={1, 1, 2, 3, 3, 4, 4, 8, 8};
    int ans =singleNonDuplicate(a);
    cout<<ans;
}





/*

Problem: Single Element in a Sorted Array
Platform: LeetCode
Problem Number: 540
Problem Link: https://leetcode.com/problems/single-element-in-a-sorted-array/
Difficulty: Medium
Topic: Arrays, Binary Search
Language: C++

Approach:
Use binary search to find the single element in a sorted
array where every other element appears exactly twice.
The parity of the middle index helps determine which half
contains the single element.

Algorithm:
1. If the array contains only one element, return it.
2. Initialize st = 0 and end = n - 1.
3. Calculate the middle index in each iteration.
4. Check whether the middle element differs from both
   its neighbors. If so, return it.
5. Use the parity of mid and compare adjacent elements
   to determine which half contains the single element.
6. Adjust the search boundaries accordingly.
7. Return -1 if no single element is found.

Time Complexity: O(log n)
Space Complexity: O(1)

Key Concepts:
- Binary Search
- Sorted Arrays
- Index Parity
- Search Space Reduction

Example:
Input: nums = [1, 1, 2, 3, 3, 4, 4, 8, 8]
Output: 2

Explanation:
Every element appears twice except 2, which appears once.
Binary search identifies the unique element without
scanning the entire array.

Assumption:
The array is sorted in non-decreasing order, and exactly
one element appears once while every other element appears
exactly twice.

*/