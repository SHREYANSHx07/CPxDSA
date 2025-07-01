class Solution {
public:
    int possibleStringCount(string s) {
        int ans=1;
        char x=s[0];
        int y=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==x) y++;
            else
            {
                ans+=y;
                y=0;
                x=s[i];
            }
        }
        if(y) ans+=y;
        return ans;
        
    }
};