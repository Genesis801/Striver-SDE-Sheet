#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int lo= 0 , hi =(m*n)-1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        int r = mid/n, c=mid%n;
        if(mat[r][c]==target){
            return true;
        }
        else if(mat[r][c] < target){
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    return false;
}
