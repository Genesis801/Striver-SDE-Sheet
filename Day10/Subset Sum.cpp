void helper(vector<int>&nums,int ind,int sum,vector<int>& ans){
    if(ind == nums.size()){
        ans.push_back(sum);
        return;
    }
    helper(nums,ind+1,sum,ans);
    helper(nums,ind+1,sum+nums[ind], ans);
    return;
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int> ans;
    
    helper(num,0,0,ans);
    sort(ans.begin(), ans.end());
    return ans;
}
