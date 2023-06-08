#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
    
    int i = n-2;
        
    while( i>=0 && nums[i] >= nums[i+1])i--;        
    if(i<0){
        reverse(nums.begin(),nums.end());
        return nums;
    }
        
    int j = n-1;
    while( nums[i] >= nums[j])j--;       
    swap(nums[i],nums[j]);        
    reverse(nums.begin()+i+1,nums.end()); 
    return nums;     
}
