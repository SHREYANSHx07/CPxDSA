class Solution {
public:
    int longestPalindrome(vector<string>& w) {
        map<string,int> m;
        for(int i=0;i<w.size();i++)  
        {
            m[w[i]]++;
        }
        int ans=0;
        for(auto i:m)
        {
            string s=i.first;
            if(s[0]!=s[1])
            {
            swap(s[0],s[1]);
            if(m.find(s)!=m.end())
            ans+=min(i.second,m[s]);
            }
            else
            {
                if(i.second%2==0)
                ans+=(i.second);
                else
                ans+=(i.second-1);
            }
        }
        ans*=2;
        for(int i=0;i<w.size();i++)
        {
            if(w[i][0]==w[i][1] && m[w[i]]%2==1)
            {
                ans+=2;
                break;
            }
        }
        return ans;
        
    }
};