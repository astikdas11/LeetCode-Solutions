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