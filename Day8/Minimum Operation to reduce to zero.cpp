class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int ops = INT_MAX;
        int l=0,r=0;
        while(l<=r){
            if(sum>=x){
                if(sum==x)
                    ops = min(ops, l+n-r);
                if(r<n){
                    sum -= nums[r++];
                }
                else{
                    break;
                }
            }
            else
                sum += nums[l++];
        }
        if(ops==INT_MAX)
            return -1;
        return ops;
    }
};
