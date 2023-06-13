#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    vector<int> arr(prices.size());
    int ans = 0;
    int  maxi =0;
    for(int i = prices.size()-1; i>=0; i--){
        maxi = max(maxi,prices[i]);
        ans = max(ans,maxi-prices[i]);
        
    }
    return ans;

}
