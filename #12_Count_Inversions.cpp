#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    vector<long long> v;
    long long ans = 0;
    for(int j=0; j<n; j++){
        int i = arr[j];
        if(v.size()==0){
            v.push_back(i);
            continue;
        }

        if(v.back()<i){
            v.push_back(i);
        }
        else{
            int d = lower_bound(v.begin(),v.end(),i)-v.begin();
            v.insert(v.begin()+d,i);
            ans = ans + v.size() - 1 - d;
        }
    }

    return ans;
}
