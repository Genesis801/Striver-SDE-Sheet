#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    /* O(n) approach
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        int curr = arr[i];
        if(mp[curr-1]==0){
            int res = 1;
            int k = curr+1;
            while(mp[k]>0){
                res++;
                k++;
            }
            ans = max(res,ans);
        }
    }
    return ans;*/
    int ans = 1 ;
    sort(arr.begin(), arr.end());
    int res = 1;
    for(int i =0;i<n-1;i++){
        if(arr[i+1]-arr[i]==1){
            res++;
            ans = max(res,ans);
        }
        else if(arr[i+1]-arr[i]==0)
            continue;
        else{
            res=1;
            ans = max(ans,res);
        }
    }
    return ans;
}
