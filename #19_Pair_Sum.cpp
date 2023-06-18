#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> result;
   for(int i=0; i<arr.size(); i++){
      for(int j=i+1; j<arr.size(); j++){
         if(s-arr[i]==arr[j]){
            result.push_back({min(arr[i], arr[j]), max(arr[i], arr[j])});
         }
      }
   }
   sort(result.begin(), result.end());
   return result;
}
