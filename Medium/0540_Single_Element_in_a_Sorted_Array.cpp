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