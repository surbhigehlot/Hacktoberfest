//Given an array consisting of positive and negative integers, find the length of the longest subarray whose sum is zero.

#include<iostream>
#include<unordered_map>
#include<cmath>
using namespace std;
int lengthOfLongestSubsetWithZeroSum(int* arr, int n){
  // Write your code here
 
    unordered_map<int,int> m;

    
    int length=0;
    int sum=0;
    
     for(int i=0 ;i<n;i++)
    {
        sum+=arr[i];
        
        if(arr[i]==0 && length ==0)
            length =1;
        
        if(sum==0)
            length= i+1;
        
		if(m.count(sum)>0)
        {
            length=max(length,i-m[sum]);
        }
        else
        {
            m[sum]=i;
        }
    }
    
    return length;
}
    
