#include<iostream>
#include<vector>
using namespace std;



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