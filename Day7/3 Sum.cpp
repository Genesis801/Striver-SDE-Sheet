#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-2;i++){
        if(i==0 || arr[i] != arr[i-1]){
            int a = K - arr[i];
            int j=i+1,k=n-1;
            while(j<k){
                int sum = arr[j] + arr[k];
                if(sum == a){
                    vector<int> res(3);
                    res[0] = arr[i];
                    res[1] = arr[j];
                    res[2] = arr[k];
                    ans.push_back(res);
                    while(j<k && arr[j]==arr[j+1])j++;
                    while(j<k && arr[k]==arr[k-1])k--;
                    j++;k--;
                }
                else if(sum<a){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
    }
    return ans;
}
