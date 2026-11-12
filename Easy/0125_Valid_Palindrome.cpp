#include<iostream>
#include<string>
using namespace std;




//FUNCTION TO VERIFY IF S CHSRCTER IS ALPHA NUMERICC OR NOT .. ie- CH MUST BE A-Z,, 0-9
bool isAlphaNum(char c){
    if(c>='0' && c<='9' || tolower(c)>='a' && tolower(c)<='z'){
        return true;
    }
    return false;
}


//FUNCTION FOR RETURN IF A STRINNG IS PALINDROME OR NOT
bool isPalindrome(string s) {
    int st=0,end=s.length()-1;
    while(st<end){
        if(!isAlphaNum(s[st])){
            st++;
            continue;
        }
        if(!isAlphaNum(s[end])){
            end--;
            continue;
        }
        if(tolower(s[st])!=tolower(s[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}




//MAIN FUNCTION FOR PERSONAL TEST CASES
int main(){
    string s ="A man, a plan, a canal: Panama";
    bool ans=isPalindrome(s);
    if(ans){
        cout<<s<<", is a palindromic string";
    }
    else cout<<s<<", is not a palindromic string";
}





/*
Problem: Valid Palindrome
Platform: LeetCode
Problem Number: 125
Problem Link: https://leetcode.com/problems/valid-palindrome/
Difficulty: Easy
Topic: Two Pointers, String, Character Manipulation
Language: C++

Approach:
Use two pointers to check whether a string is a palindrome
while ignoring non-alphanumeric characters and case differences.

A helper function isAlphaNum() checks whether a character
is an alphabet (a-z, A-Z) or a digit (0-9).

The main function compares characters from both ends of
the string after converting them to lowercase.

Algorithm:

1. Initialize two pointers:
   - st = 0 (beginning of the string).
   - end = s.length() - 1 (end of the string).

2. Continue while st < end.

3. If s[st] is not alphanumeric:
   - Increment st.
   - Continue to the next iteration.

4. If s[end] is not alphanumeric:
   - Decrement end.
   - Continue to the next iteration.

5. Convert both characters to lowercase and compare them.
   - If they are different, return false.

6. If they match:
   - Increment st.
   - Decrement end.

7. If all valid character pairs match, return true.

Time Complexity: O(n)
Space Complexity: O(1)

Key Concepts:

- Two Pointers
- String Manipulation
- Character Validation
- Case-Insensitive Comparison
- Alphanumeric Characters
- In-place String Traversal

Example:
Input: s = "A man, a plan, a canal: Panama"
Output: true

Explanation:
After removing non-alphanumeric characters and ignoring
uppercase/lowercase differences, the string becomes:

"amanaplanacanalpanama"

The resulting string reads the same forward and backward,
so it is a valid palindrome.

Another Example:
Input: s = "race a car"
Output: false

Explanation:
After ignoring spaces and case differences, the characters
do not form the same sequence when reversed.

Assumption:
The input contains a valid string as specified by the
standard LeetCode problem constraints.
*/