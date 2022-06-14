#include<bits/stdc++.h>
void helper(vector<int>& arr,int ind,vector<vector<int>>&ans,vector<int>&res){
    if(ind == arr.size()){
        ans.push_back(res);
        return;
    }
    res.push_back(arr[ind]);
    helper(arr,ind+1,ans,res);
    res.pop_back();
    while(ind+1 < arr.size() && arr[ind]==arr[ind+1])ind++;
    helper(arr,ind+1,ans,res);
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> res;
    sort(arr.begin(),arr.end());
    
    helper(arr,0,ans,res);
    sort(ans.begin(),ans.end());
    return ans;
}
