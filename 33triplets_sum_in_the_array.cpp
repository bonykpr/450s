#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    sort(a,a+n);
	    int l,r,ans=0;
	    for(int i=0;i<n-2;i++)
	    {
	        l=i+1;
	        r=n-1;
	        
	        while(l<r)
	        {
	            if(a[i]+a[l]+a[r]==k)
	            {
	            ans=1;
	            break;
	            }
	            else if(a[i]+a[l]+a[r]<k)
	                l++;
	                else
	                    r--;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
