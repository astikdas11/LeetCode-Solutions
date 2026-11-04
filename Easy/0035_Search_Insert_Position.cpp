#include<iostream>
#include<vector>
using namespace std;


//FUNCTION  FOR THE SOLUTION
int searchInsert(vector<int>& nums, int target) {
    int st = 0, en = nums.size() - 1;

    while (st <= en) {
        int mid = st + (en - st) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            st = mid + 1;
        } else {
            en = mid - 1;
        }
    }

    return st;
}