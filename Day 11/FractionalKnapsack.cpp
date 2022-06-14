#include<bits/stdc++.h>
bool compare(vector<double>& it1, vector<double>& it2){
    return it1[2] > it2[2];
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    vector<vector<double>> struc(n,vector<double>(3));
    for(int i=0;i<n;i++){
        struc[i][0] = items[i].second;
        struc[i][1] = items[i].first;
        struc[i][2] = struc[i][0]/struc[i][1];
    }
    sort(struc.begin(), struc.end(), compare);
    /*for(int i=0;i<n;i++){
        cout<<struc[i][0]<<" ";
        cout<<struc[i][1]<<" ";
        cout<<struc[i][2]<<endl;
        
    }*/
    int curr = w;
    double prof = 0;
    for(int i=0;i<n;i++){
        if(curr>=struc[i][1]){
            prof += struc[i][0];
            curr -= struc[i][1];
        }
        else{
            prof += (curr/struc[i][1])*struc[i][0];
            curr=0;
            break;
        }
    }
    return prof;
}
