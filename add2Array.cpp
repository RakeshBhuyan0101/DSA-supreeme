/*
Given two array A[0….N-1] and B[0….M-1] of size N and M respectively, representing two numbers such that every element of arrays represent a digit. For example, A[] = { 1, 2, 3} and B[] = { 2, 1, 4 } represent 123 and 214 respectively. The task is to find the sum of both the numbers.

Input : A[] = {1, 2}, B[] = {2, 1}
Output : 33
Explanation:
N=2, and A[]={1,2}
M=2, and B[]={2,1}
Number represented by first array is 12.
Number represented by second array is 21
Sum=12+21=33

 */

#include<iostream>
#include <algorithm>
using namespace std;

string calc_Sum(int *a,int n,int *b,int m){
    // Complete the function
    int carry = 0;
    int i = n-1;
    int j = m-1;
    string ans;
    
    while (i>=0 && j>=0){
        int x = a[i]+b[j]+carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        carry= x/10;
        i--; j--;
    }
    
    while (i>=0){
        int x = a[i]+carry;
        int digit = x%10;
        ans.push_back(digit+'0');
        carry = x/10;
        i--;
    }
    
    while (j>=0){
         int x = b[j]+carry;
        int digit = x%10;
        ans.push_back(digit+'0');
        carry = x/10;
        j--;
    }
    
    if (carry){
        ans.push_back (carry+'0');
    }
    
    while (ans[ans.size()-1] == '0'){
        ans.pop_back();
    }
    
    reverse (ans.begin() , ans.end());
    return ans;
    
}

int main()
{   
    int a[] = {9,5,4,9}; int n = 4;
    int b[]={2,1,4};      int m = 3;
    string ans;
    ans = calc_Sum(a,n,b,m);
    for (auto a : ans){
        cout << a ;
    }

    return 0;
}