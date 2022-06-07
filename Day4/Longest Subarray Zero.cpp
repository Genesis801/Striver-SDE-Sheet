#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
    unordered_map<int,int> mp;
    int n = arr.size();
    vector<int> sum(n);
    int ans = 0;
    sum[0] = arr[0];
    mp[sum[0]] = 0;
    if(sum[0] == 0)
        ans = 1;
    for(int i=1;i<n;i++){
        sum[i] = arr[i] + sum[i-1];
        if(sum[i] == 0){
            ans = max(i+1,ans);
            continue;
        }
        if(mp.find(sum[i]) == mp.end()){
            mp[sum[i]] = i;
        }
        else{
            ans =  max(ans, i-mp[sum[i]]);
        }
    }
    return ans;
}
