class Solution{
    public:
       
        static bool pairCompare(const pair<pair<int, int>, int> &a,
                     const pair<pair<int, int>, int> &b) {
        if (a.first.second != b.first.second) {
            return a.first.second < b.first.second;
        }
        return a.second < b.second;
    }
    
    int maxMeetings(int start[], int end[], int n) {
    
        vector<pair<pair<int, int>, int>> x;
    
        for (int i = 0; i < n; i++) x.push_back({{start[i], end[i]}, i + 1});
    
        sort(x.begin(), x.end(), pairCompare);
        int last = 0;
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (x[i].first.first > last) {
                res++;
                last = x[i].first.second;
            }
        }
        return res;
    }
};
