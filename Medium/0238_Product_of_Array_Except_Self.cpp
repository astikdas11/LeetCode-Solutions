#include<iostream>
#include<vector>
using namespace std;

//FUNCTION FOR CALCULATE PRODUCT EXCEPT SELF
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n,1);
    
    //left product
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }

    //right product
    int rp=1;
    for(int i=n-2;i>=0;i--){
        rp*=nums[i+1];
        ans[i]*= rp;
    }

    return ans;
}


//MAIN FUNCTION FOR PERSONAL TEST CASES
int main(){
    vector<int> nums={1,2,3,4};
    vector<int> ans=productExceptSelf(nums);
    for(int i=0;i<nums.size();i++){
        cout<<ans[i]<<", ";
    }
}