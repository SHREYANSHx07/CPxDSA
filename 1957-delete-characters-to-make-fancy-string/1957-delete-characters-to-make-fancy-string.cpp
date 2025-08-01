class Solution {
public:
    string makeFancyString(string s) {
        int n=s.size(),x=0;
        string ans="";
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            x++;
            else
            {
                if(x==0)
                ans+=s[i];
                else
                {
                    ans+=s[i-1];
                    ans+=s[i-1];
                }
                x=0;
            }
        }
        if(x==0)
        ans+=s[n-1];
        else
        {
            ans+=s[n-1];
            ans+=s[n-1];
        }
        return ans;
        
    }
};