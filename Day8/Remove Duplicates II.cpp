class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,k=0;
        int n = nums.size();
        unordered_map<int,int> mp;
        while(i<n){
            if(mp[nums[i]]<2){
                mp[nums[i]]++;
                nums[k++]=nums[i++];
            }
            else{
                i++;
            }
        }
        return k;
    }
};
