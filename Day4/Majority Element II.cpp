#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    unordered_map<int, int> mp;
    int n = arr.size();
    int target = floor(n/3);
    
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    vector<int> ans;
    for(auto it:mp){
        if(it.second>target){
            ans.push_back(it.first);
        }
    }
    return ans;
}
