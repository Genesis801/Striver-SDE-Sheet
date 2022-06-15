int uniqueElement(vector<int> arr, int n)
{
	// Write your code here
    int lo = 0,hi =n-1;
    while(lo<hi){
        int mid = (lo+hi)/2;
        if((mid%2==0 && arr[mid]!=arr[mid+1]) || (mid%2==1 && arr[mid]!=arr[mid-1])){
            hi = mid;
        }
        else
           lo = mid+1;
    }
    return arr[lo];
}
