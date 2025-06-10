class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> m;
        for(auto i:s) m[i]++;
        int x=-1,y=INT_MAX;
        for(auto i:m)
        {
            if(i.second&1) x=max(x,i.second);
            else y=min(y,i.second);
        }
        return x-y;

        
    }
};