#include<bits/stdc++.h>
bool sortProf(vector<int>& j1, vector<int>&j2){
    return j1[1]>j2[1];
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    sort(jobs.begin(), jobs.end(), sortProf);
    int n = jobs.size();
    int maxDead = jobs[0][0];
    for(int i=1;i<n;i++){
        if(maxDead<jobs[i][0])
            maxDead = jobs[i][0];
    }
    vector<int> time(maxDead+1,0);
    int profit =0;
    for(int i=0;i<n;i++){
        int currDeadLine = jobs[i][0];
        if(time[currDeadLine]==0){
            time[currDeadLine] = 1;
            profit += jobs[i][1];
        }
        else{
            int j=currDeadLine -1;
            while(j>0){
                if(time[j]==0){
                    time[j] = 1;
                    profit += jobs[i][1];
                    break;
                }
                else{
                    j--;
                }
            }
        }
    }
    return profit;
}
