class Solution {
  public:
    int countSquares(int N) {
        // code here
        int square=0;
        vector<int> v;
        for(int i=1;i<=N;i++)
        {
            square=i*i;
            if(square<N)
            v.push_back(square);
            else
            break;
            
        }
        return v.size();
    }
};
