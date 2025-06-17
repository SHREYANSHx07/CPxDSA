class Solution {
public:
    int maxDiff(int n) {
        string s=to_string(n);
        unordered_map<char,int> m;
        for(auto i:s) m[i]++;
        int ans=0,ans1=0,ans2=0;
        if(m.size()==1)
        {
            for(int i=0;i<s.size();i++) ans=ans*10 + 9;
            for(int i=0;i<s.size();i++) ans1=ans1*10 + 1;
            return ans-ans1;
        }
        else
        {
            int x=-1,y=-1;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]-'0' != 9)
                {
                    x=s[i]-'0';
                    break;
                }
            }
            for(int i=0;i<s.size();i++)
            {
                if(s[i]!=s[0] && s[i]!='0')
                {
                    y=s[i]-'0';
                    break;
                }
            }
            if(x!=-1)
            {
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]-'0' == x)
                    ans=ans*10 + 9;
                    else
                    ans=ans*10 + s[i]-'0';
                }
            }
             if(y!=-1)
            {
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]-'0' == y)
                    ans1=ans1*10 + 0;
                    else
                    ans1=ans1*10 + s[i]-'0';
                }
            }
            for(int i=0;i<s.size();i++)
            {
                if(s[i]==s[0])
                ans2=ans2*10 + 1;
                else
                ans2=ans2*10 + (s[i]-'0');
            }
            
            //return ans;
        }
        cout<<ans1<<" "<<ans2;
        ans1=min(ans1,ans2);
        if(ans1==0)
        ans1=n;
        return ans-ans1;
    }
};