#include<iostream>
#include<vector>
using namespace std;


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