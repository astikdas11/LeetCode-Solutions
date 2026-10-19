#include<iostream>
#include<vector>
using namespace std;


//FUNCTION FOR GETTING THE UNIQUE NUMBER
int singleNumber(vector<int>& nums) {
    int ans=0;
    for(auto x:nums)
    ans^=x;
    return ans;
}



//MAIN FUNCTION FOR PERSONAL TESTCASES
int main(){
    vector<int> nums={4,1,2,1,2};
    int ans =singleNumber(nums);
    cout<<ans;
}