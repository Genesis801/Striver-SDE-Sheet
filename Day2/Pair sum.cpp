#include<bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<int> res(2);
    vector<vector<int>> ans;
    int n=arr.size();
    sort(arr.begin(), arr.end());
    
    int l=0,r=n-1;
    while(l<r){
        int sum = arr[l] + arr[r];
        if(sum == s){
            res[0] = arr[l]; res[1] = arr[r];
            int lc=1,rc=1;int tot;
            if(arr[l] != arr[r]){
                while(l<r && arr[l] == arr[l+1])
                {
                    lc++;l++;
                } 
                l++;
                while(l<r && arr[r] == arr[r-1])
                {
                    rc++;r--;
                }
                r--;
                tot = lc*rc;
                while(tot > 0){
                ans.push_back(res);
                tot--;
                }
            }
            else{
                tot = r-l+1;
                tot = (tot*(tot-1))/2;
                while(tot > 0){
                    ans.push_back(res);
                    tot--;
                }
                break;
            }
            
        }
        else if(sum < s)
            l++;
        else
            r--;
    }
    return ans;
    
}
