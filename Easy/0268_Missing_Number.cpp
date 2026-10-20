#include<iostream>
#include<vector>
using namespace std;


//FUNCTION FOR FIND AND RETURN THE MISSING NUMBER
int missingNumber(vector<int>& nums) {
    int n = nums.size() , i = 0;
    while(i < n){
        int j = nums[i];
        if (nums[i] >= 0 && nums[i] < n && nums[i] != nums[j])
            swap(nums[i],nums[j]);
        else i++;
    }
    for (int i = 0 ; i < n ; i++)
        if (nums[i] != i) return i;
    return n;
}


//MAIN FUNCTION FOR PERRSONAL TESTCASES
int main(){
    vector<int> nums={9,6,4,2,3,5,7,0,1};
    int n= missingNumber(nums);
    cout<<n;
}

