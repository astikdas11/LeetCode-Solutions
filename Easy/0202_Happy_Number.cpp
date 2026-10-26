#include<iostream>
using namespace std;



bool isHappy(int n){
    int num =n;
    int slow = getNextNumber(num);
    int fast = getNextNumber(getNextNumber(num));

    while (slow != fast){
        if (fast == 1)
            return true;
        slow = getNextNumber(slow);
        fast = getNextNumber(getNextNumber(fast));
    }

    return slow == 1;
}

int getNextNumber(int n){
    int output = 0;

    while (n > 0){
        int digit = n % 10;
        output += digit * digit;
        n = n / 10;
    }

    return output;
}



int main(){
    int num =19;
    if(isHappy(num)){
        cout<<num<<" is a Happy Number";
    }else{
        cout<<num<<" is not a Happy Number";
    }
}