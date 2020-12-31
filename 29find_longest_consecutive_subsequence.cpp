//NAIVE APPROACH
int findLongestConseqSubseq(int arr[], int N)
{
  //Your code here
  sort(arr,arr+N);
  //int i;
  int j=0,count=0;
  vector<int> v;
  while(j<N)
  {
      if(arr[j]+1==arr[j+1])
        count++;
        else if(arr[j]==arr[j+1])
            continue;
      else
      {
          v.push_back(count+1);
          count=0;
      }
      j++;
      
  }
  sort(v.begin(),v.end());
  //i=v.size();
  return(v[v.size()-1]);
  
}

//OPTIMAL SOLUTION MAYBE:

int findLongestConseqSubseq(int arr[], int N)
{
  //Your code here
  unordered_map<int,bool> m;
  for(int i=0;i<N;i++)
    m[arr[i]]=true;
    
    int res=1,cur,elt;
    
    for(int i=0;i<N;i++)
    {
        if(!m[arr[i]])
        continue;
        
        cur=1;
        elt=arr[i]+1;
        
        while(m[elt])
        {
            cur++;
            m[elt] = false;
            elt++;
        }
        
        elt = arr[i] - 1;
        
        while(m[elt])
        {
            cur++;
            m[elt] = false;
            elt--;
        }
        res=max(res,cur);
    }
    return res;
}
