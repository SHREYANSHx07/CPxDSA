class Solution {
public:
    int canBeTypedWords(string t, string b) {
        unordered_map<char,int> m;
        for(int i=0;i<b.size();i++) m[b[i]]++;
        int x=0,ans=1;
        for(int i=0;i<t.size();i++)
        {
            if(t[i]==' ' && ans==0)
            {
                ans=1;
            }
            else if(t[i]==' ' && ans==1)
            x++;
            else
            {
                if(m[t[i]]) ans=0;
            }
        }
        if(ans) x++;
        return x;
        
    }
};