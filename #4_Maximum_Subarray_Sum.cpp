#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long max = 0;
    long long sum = 0;

    for(int i=0; i<=n; i++){
        // cout<<"sum "<<sum<<endl;

        if(sum > max){
            max = sum;
        }
        
        sum += arr[i];
        
        if(sum < 0){
            sum = 0;
        }
    }
    return max;

}
