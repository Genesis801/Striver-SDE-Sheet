#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    int x = m-1, y=0;
    while(x>=0 && y<n){
        if(arr1[x] <= arr2[y]){
            y++;
        }
        else{
            swap(arr1[x],arr2[y]);
            x--;
        }
    }
    sort(arr1.begin(), arr1.begin()+m);
    sort(arr2.begin(), arr2.end());
    int k=0;
    for(int i=m;i<m+n;i++){
        arr1[i] = arr2[k++];
    }
    return arr1;
}
