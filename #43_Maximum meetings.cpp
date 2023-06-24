#include <bits/stdc++.h> 
bool srt(pair<int,pair<int,int>> x,pair<int,pair<int,int>> y){
   return x.second.first<y.second.first; 
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    vector<pair<int,pair<int,int>>>se;
    int n = start.size();
    for(int i =0;i<n;i++){
        se.push_back({start[i],{end[i],i+1}});
    }
    sort(se.begin(),se.end(),srt);
    vector<int>ans;
    int me=se[0].second.first;
    ans.push_back(se[0].second.second);
    for(int i=1;i<n;i++){
        if(se[i].first>me){
            ans.push_back(se[i].second.second);
            me=se[i].second.first;
        }


    }



    return ans;
}
