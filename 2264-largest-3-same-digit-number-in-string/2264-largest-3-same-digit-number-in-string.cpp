class Solution {
public:
    string largestGoodInteger(string s) {
        string ans="",s1="";
        int n=s.size();
        vector<string> v;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                s1+=s[i];
            }
            else
            {
                if(s1.size()>=2)
                {
                    char c=s1[s1.size()-1];
                    string s2="";
                    s2+=c;
                    s2+=c;
                    s2+=c;
                    v.push_back(s2);
                }
                s1="";
            }
        }
        if(s1.size()>=2)
        {
            char c=s1[s1.size()-1];
                    string s2="";
                    s2+=c;
                    s2+=c;
                    s2+=c;
                    v.push_back(s2);
        }
        int j=-1,x=-1;
        for(int i=0;i<v.size();i++)
        {
            int y=v[i][0]-'0';
            if(y>x)
            {
                j=i;
                x=y;
            }
        }
        for(auto i:v) cout<<i<<" ";
        cout<<'\n';
        cout<<j<<" ";
        if(j!=-1)
        return v[j];
        else
        return ans;
        
    }
};