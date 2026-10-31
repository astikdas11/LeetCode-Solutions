#include<iostream>
#include<vector>
using namespace std;



void merge(vector<int>& a, int m, vector<int>& b, int n) {
    int idx=m+n-1, i=m-1,j=n-1;
    while(i>=0 && j>=0){
        if(a[i]>=b[j]){
            a[idx--]=a[i--];
        }else{
            a[idx--]=b[j--];
        }
    }
    while(j>=0){
        a[idx--]=b[j--];
    }
}


/**
 * LeetCode 88: Merge Sorted Array
 *
 * Merges two sorted arrays into `a` in non-decreasing order.
 * The first `m` elements of `a` and all `n` elements of `b`
 * are merged in-place, using the extra space already available
 * at the end of `a`.
 *
 * Approach:
 * - Start from the end of both arrays and the final position in `a`.
 * - Place the larger current element at the final position.
 * - Copy any remaining elements from `b`.
 * - Remaining elements in `a` are already in their correct positions.
 *
 * Time Complexity: O(m + n)
 * Auxiliary Space: O(1)
 *
 * @param a The destination array with space for m + n elements.
 * @param m Number of valid elements in a.
 * @param b The second sorted array.
 * @param n Number of elements in b.
 */