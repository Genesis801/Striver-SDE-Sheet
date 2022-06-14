#include<bits/stdc++.h>
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    int n = start.size(); 
    vector<vector<int>> struc(n,vector<int>(3));
    for(int i=0;i<n;i++){
        struc[i][0] = end[i];
        struc[i][1] = start[i];
        struc[i][2] = i+1;
    }
    sort(struc.begin(), struc.end());
    vector<int> ans;
    ans.push_back(struc[0][2]);
    int lim = struc[0][0];
    
    for(int i=0;i<n-1;i++){
        if(struc[i][0]==struc[i+1][0]){
            if(struc[i][2]>struc[i+1][2]){
                swap(struc[i],struc[i+1]);
            }
        }
    }
    for(int i=1;i<n;i++){
        if(struc[i][1] > lim){
            lim = struc[i][0];
            ans.push_back(struc[i][2]);
        }
    }
    return ans;
}
