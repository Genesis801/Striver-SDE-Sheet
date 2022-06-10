#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
    vector<long> lmx(n);
    vector<long> rmx(n);
    lmx[0] = arr[0];
    rmx[n-1] = arr[n-1];
    for(int i=1;i<n;i++){
        lmx[i] = max(lmx[i-1],arr[i]);
        rmx[n-i-1] = max(rmx[n-i],arr[n-1-i]);
    }
    long ans =0;
    for(int i=0;i<n;i++){
        ans += min(lmx[i],rmx[i]) - arr[i];
    }
    return ans;
}
