//LeetCode PROBLEM NUMBER 8

#include<iostream>
using namespace std;

//FUNCTION FOR CHECKING THE NUMBER IS PALINDROME OR NOT

bool isPalindrome(int x) {
    int rev=0,n=x;
    
    while(x >0){
        if (rev>INT8_MAX/10 || rev<INT8_MIN/10) return false;
        rev= rev*10+(x%10);
        x/=10;
    }
    if(n==rev) return true;
    else return false;
}


//MAIN FUNCTION ONLY FOR PERSONAL TESTCASE
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    bool res = isPalindrome(x);
    if(res == true){
        cout<<x<<" is a palindrome number...";
    }
    else{
        cout<<x << " is not a palindrome  number";
    }
}