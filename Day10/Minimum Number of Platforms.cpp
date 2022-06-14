int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int i=1,j=0;
    int ans = 1;
    int platforms = 1;
    while(i<n && j<=i){
        if(at[i]>dt[j]){
            j++;
            platforms--;
        }
        else{
            i++;
            platforms++;
        }
        ans = max(ans,platforms);
    }
    return ans;
}
