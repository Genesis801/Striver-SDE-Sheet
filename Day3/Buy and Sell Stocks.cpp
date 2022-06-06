#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n =prices.size();
    int idx = 0;int tot_prof=0;int curr_prof;
    for(int i=1;i<n-1;i++){
        if(prices[idx]>prices[i])
        {
            idx = i;
            continue;
        }
        else{
            if(prices[i]<=prices[i+1]){
                continue;
            }
            else{
                curr_prof = prices[i] - prices[idx];
                tot_prof = max(tot_prof,curr_prof);\
                if(prices[i+1]<prices[idx])
                {
                    idx = i+1;
                    i++;
                }
            }
        }
    }
    if(prices[n-1]>prices[n-2]){
        tot_prof=max(tot_prof,prices[n-1]-prices[idx]);
    }
    return tot_prof;
}
