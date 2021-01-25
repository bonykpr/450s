#include <bits/stdc++.h>
using namespace std;
 
/* if x is present in arr[] then returns the index of
   FIRST occurrence of x in arr[0..n-1], otherwise
   returns -1 */
int first(int arr[], int low, int high, int x, int n)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
        else
            return first(arr, low, (mid - 1), x, n);
    }
    return -1;
}
 
/* if x is present in arr[] then returns the index of
   LAST occurrence of x in arr[0..n-1], otherwise
   returns -1 */
int last(int arr[], int low, int high, int x, int n)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == n - 1 || x < arr[mid + 1]) && arr[mid] == x)
            return mid;
        else if (x < arr[mid])
            return last(arr, low, (mid - 1), x, n);
        else
            return last(arr, (mid + 1), high, x, n);
    }
    return -1;
}
 
// Driver program
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        int idx1= first(a, 0, n - 1, x, n);
        int idx2= last(a, 0, n - 1, x, n);
        if(idx1==-1)
        cout<<-1<<endl;
        else
        cout<<idx1<<" "<<idx2<<endl;
    }
    return 0;
}
