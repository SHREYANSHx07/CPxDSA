class Solution {
public:
    int possibleStringCount(string s) {
        int ans=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1]) ans++;
        }
        return ans;
        
    }
};