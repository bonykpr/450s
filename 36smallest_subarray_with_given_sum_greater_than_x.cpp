#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    
	    int curr_sum=0 , minlen=n+1;
	    
	    int start=0,end=0;
	    while(end<n)
	    {
	        while(curr_sum<=x && end<n)
	            curr_sum +=a[end++];
	            
	        while(curr_sum>x && start<n)
	        {
	            if(end-start<minlen) minlen=end-start;
	            curr_sum-=a[start++];
	        }
	    }
	    cout<<minlen<<endl;
	}
	return 0;
}
