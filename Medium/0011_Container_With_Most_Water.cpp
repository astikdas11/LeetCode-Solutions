#include<iostream>
#include<vector>
using namespace std;


//FUNCTION FOR CALCULATE MAXIMUM AREA
int maxArea(vector<int>& height) {
    int start=0, stop= height.size()-1,area=0;
    while(start<stop){
        if(height[start]<height[stop]){
            area = max(area,height[start]*(stop-start));
            start++;
        }
        else{
            area = max(area,height[stop]*(stop-start));
            stop--;
        }
    }
    return area;
}


//MAIN FUNCTION FOR PERSONAL TESTCASES
int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int ans=maxArea(height);
    cout<<ans;
}




/*
Problem: Container With Most Water
Platform: LeetCode
Problem Number: 11
Problem Link: https://leetcode.com/problems/container-with-most-water/
Difficulty: Medium
Topic: Arrays, Two Pointers, Greedy
Language: C++

Approach:
Use two pointers to represent the left and right boundaries
of a container. Calculate the area formed by these lines
and move the pointer pointing to the shorter line inward.

Algorithm:
1. Initialize start = 0 and stop = n - 1.
2. Initialize area = 0 to store the maximum area.
3. While start < stop:
   - Calculate the current area using the shorter line
     multiplied by the distance between the pointers.
   - Update the maximum area.
   - If height[start] < height[stop], increment start.
   - Otherwise, decrement stop.
4. Return the maximum area found.

Time Complexity: O(n)
Space Complexity: O(1)

Key Concepts:
- Two-Pointer Technique
- Greedy Algorithm
- Array Traversal
- Maximum Area Calculation

Example:
Input: height = [1, 8, 6, 2, 5, 4, 8, 3, 7]
Output: 49

Explanation:
The lines at indices 1 and 8 have heights 8 and 7.
The width is 7, and the container area is 7 * 7 = 49.

Assumption:
The input contains at least two non-negative integers.
*/