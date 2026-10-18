//LeetCode PROBLEM NUMBER 9

#include<iostream>
using namespace std;

//FUNCTION FOR CHECKING THE NUMBER IS PALINDROME OR NOT

bool isPalindrome(int x) {
    int rev=0,n=x;
    
    while(x >0){
        if (rev>INT32_MAX/10 || rev<INT32_MIN/10) return false;
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



/*
Problem: Palindrome Number
Platform: LeetCode
Problem Number: 9
Problem Link: https://leetcode.com/problems/palindrome-number/
Difficulty: Easy
Topic: Math, Number Manipulation
Language: C++

Approach:
Reverse the digits of the given integer and compare
the reversed number with the original number.

Algorithm:
1. Store the original number.
2. Initialize the reversed number to 0.
3. Extract the last digit using x % 10.
4. Append the digit to the reversed number.
5. Remove the last digit using x /= 10.
6. Compare the reversed number with the original number.

Time Complexity: O(log10(x))
Space Complexity: O(1)

Note:
The current implementation processes only positive integers
and zero. Negative numbers return false because the loop
does not execute and the original number differs from zero,
except when x is zero.

*/