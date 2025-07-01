class Solution {
public:
    int possibleStringCount(string s) {
        unordered_map<char,int> m;
        for(auto i:s) m[i]++;
        int ans=s.size()-m.size();
        return ans+1;
        
    }
};