#include <bits/stdc++.h>
int findMajorityElement(int arr[], int n) {
    int target=n/2;
    unordered_map<int, int> cnt;
    for(int i=0; i<n; i++) {
        if(++cnt[arr[i]] > target) {
            return arr[i];
        }
    }
    return -1;

}
