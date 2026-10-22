#include<iostream>
#include<vector>
using namespace std;



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


int main(){
    vector<int> a={3,5,3,2,0};
    int mid=peakIndexInMountainArray(a);
    cout<<mid;      
}