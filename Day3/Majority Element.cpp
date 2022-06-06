#include<bits/stdc++.h>
int findMajorityElement(vector<int> &arr, int n) {
	// Write your code here.
    int maj=floor(n/2);
    int count =1;
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                count++;
            }
        }
        if(count>=maj)
            return arr[i];
        else
        {
            count =1;
        }
    }
    return -1;
