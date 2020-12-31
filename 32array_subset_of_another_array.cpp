//https://www.geeksforgeeks.org/find-whether-an-array-is-subset-of-another-array-set-1/

#include <bits/stdc++.h> 
 using namespace std;
/* Return 1 if arr2[] is a subset of  
arr1[] */
bool isSubset(int arr1[], int arr2[], 
              int m, int n) 
{ 
    int i = 0; 
    int j = 0; 
    for (i = 0; i < n; i++) { 
        for (j = 0; j < m; j++) { 
            if (arr2[i] == arr1[j]) 
                break; 
        } 
  
        /* If the above inner loop was 
        not broken at all then arr2[i] 
        is not present in arr1[] */
        if (j == m) 
            return 0; 
    } 
  
    /* If we reach here then all 
    elements of arr2[] are present 
    in arr1[] */
    return 1; 
} 
  
// Driver code 
int main() 
{ 
   int t;cin>>t;
   while(t--)
   {
       int m,n;
       cin>>m>>n;
       int arr1[m],arr2[n];
       for(int i=0;i<m;i++)
	    {
	        cin>>arr1[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr2[i];
	    }
	    
	    bool a;
	    a=isSubset(arr1,arr2,m,n);
	    if(a==1)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
   }
   return 0;
} 
