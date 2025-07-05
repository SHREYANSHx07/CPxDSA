class Solution {
public:
    int findLucky(vector<int>& v) {
        unordered_map<int,int> m;
        for(auto i:v) m[i]++;
        int ans=-1;
        for(auto i:m) if(i.first==i.second) ans=max(i.first,ans);
        return ans;
    }
};