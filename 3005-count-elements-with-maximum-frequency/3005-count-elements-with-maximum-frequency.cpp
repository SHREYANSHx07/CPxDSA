class Solution {
public:
    int maxFrequencyElements(vector<int>& v) {
        unordered_map<int,int> m;
        for(auto i:v) m[i]++;
        int x=-1,ans=0;
        for(auto i:m) x=max(x,i.second);
        for(auto i:m) if(i.second==x) ans+=x;
        return ans;
    }
};