#include<bits/stdc++.h>
void helper(string &s, int ind, vector<string> &ans){
    if(ind == s.size()){
        ans.push_back(s);
        return;
    }
    for(int i=ind;i<s.size();i++){
        swap(s[i],s[ind]);
        helper(s,ind+1,ans);
        swap(s[i],s[ind]);
    }
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    sort(s.begin(),s.end());
    vector<string> ans;
    helper(s,0,ans);
    return ans;
}
