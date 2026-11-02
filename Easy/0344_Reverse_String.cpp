#include<iostream>
#include<vector>
using namespace std;



//FUNCTION FOR REVERSE THE STRING
void reverseString(vector<char>& s) {
    int st=0,end=s.size()-1;
    while(st<end){
        swap(s[st],s[end]);
        st++;
        end--;
    }
}



//MAIN FUNCTION FOR PERSONAL TESTCASES
int main(){
    vector<char> s= {'h','e','l','l','o'};
    reverseString(s);
    for(char ch:s){
        cout<<ch<<" ";
    }
}




/*


Problem: Reverse String
Platform: LeetCode
Problem Number: 344
Problem Link: https://leetcode.com/problems/reverse-string/
Difficulty: Easy
Topic: Two Pointers, String
Language: C++

Approach:
Reverse the character array in-place using two pointers.
One pointer starts at the beginning and the other at the end.
Swap the characters at these positions, then move both pointers
toward the center until they meet or cross.

Algorithm:

1. Initialize st = 0 and end = s.size() - 1.
2. While st < end:
   - Swap s[st] and s[end].
   - Increment st.
   - Decrement end.
3. Stop when the pointers meet or cross.
4. The character array is now reversed.

Time Complexity: O(n)
Space Complexity: O(1)

Key Concepts:

- Two Pointers
- In-place Reversal
- Character Array Manipulation
- Swapping

Example:
Input: s = ['h', 'e', 'l', 'l', 'o']
Output: ['o', 'l', 'l', 'e', 'h']

Explanation:
The first and last characters are swapped, then the second and
second-last characters, until the pointers meet.

Assumption:
The input is a vector of characters, as specified by the
standard LeetCode problem constraints.


*/