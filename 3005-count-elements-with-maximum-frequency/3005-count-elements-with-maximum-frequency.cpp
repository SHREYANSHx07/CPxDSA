class Solution {
public:
    int maxFrequencyElements(vector<int>& v) {
        unordered_map<int,int> m,m1;
        for(auto i:v) m[i]++;
        int x=-1,ans=0;
        for(auto i:m) 
        {
            m1[i.second]++;
            x=max(x,i.second);
        }
        return m1[x]*(x);
    }
};