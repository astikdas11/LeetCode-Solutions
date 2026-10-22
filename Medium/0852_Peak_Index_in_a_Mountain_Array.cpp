#include<iostream>
#include<vector>
using namespace std;


//FUNCTION FOR GETTING THE PEAK VALUE
int peakIndexInMountainArray(vector<int>& a) {
    int st=0, end =a.size()-1;
    while(st<=end){
        int mid= st+(end-st)/2;
        if(a[mid]<a[mid-1]){
            end =mid;
        }
        else if(a[mid]<a[mid+1]){
            st=mid;
        }
        else{
            return mid;
        }
    }
    return -1;
}



//MAIN FUNCTION FOR PERSONAL TESTCASES
int main(){
    vector<int> a={3,5,3,2,0};
    int mid=peakIndexInMountainArray(a);
    cout<<mid;      
}




/*
Problem: Peak Index in a Mountain Array
Platform: LeetCode
Problem Number: 852
Problem Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/
Difficulty: Medium
Topic: Arrays, Binary Search
Language: C++

Approach:
Use binary search to find the peak element in a mountain
array. Compare the middle element with the next element
to determine whether the peak lies to the left or right.

Algorithm:
1. Initialize st = 0 and end = n - 1.
2. While st < end, calculate the middle index.
3. If a[mid] < a[mid + 1], the array is ascending at mid.
   Move st to mid + 1.
4. Otherwise, the peak is at mid or to its left.
   Move end to mid.
5. When st == end, return st as the peak index.

Time Complexity: O(log n)
Space Complexity: O(1)

Key Concepts:
- Binary Search
- Mountain Arrays
- Peak Finding
- Search Space Reduction

Example:
Input: a = [0, 2, 5, 3, 1]
Output: 2

Explanation:
The maximum element is 5, located at index 2.
The array increases before the peak and decreases after it.

Assumption:
The array is a valid mountain array with at least three
elements, strictly increasing before the peak and strictly
decreasing after the peak.
*/