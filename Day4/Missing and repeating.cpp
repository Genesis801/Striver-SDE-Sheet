#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	/*pair<int,int> ans;
    int sum = (n*(n+1))/2;
    int sq_sum = (n*(n+1)*(2*n+1))/6;
    int s=0,sq_s=0;
    for(int i=0;i<n;i++){
        s += arr[i];
        sq_s += arr[i]*arr[i];
    }
    int a = s-sum;
    int b = (sq_s-sq_sum)/a;
    
    int repeat = (a+b)/2;
    int missing = b-repeat;
    ans.first = missing;
    ans.second = repeat;
    return ans;*/
    pair<int,int>ans;
    int i=0;
    while(i<n){
           if(arr[i]!=arr[arr[i]-1]){
               swap(arr[i],arr[arr[i]-1]);
           }
           else
               i++;
       }
       for(int i=0;i<n;i++){
           if(arr[i]!=i+1){
              ans.first=i+1;
              ans.second=arr[i];
           }
        }
     return ans;
}
