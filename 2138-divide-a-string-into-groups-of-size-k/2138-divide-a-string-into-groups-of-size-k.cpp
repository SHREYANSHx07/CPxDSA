class Solution {
public:
    vector<string> divideString(string s, int k, char f) {
        int n=s.size();
        vector<string> ans;
        string s1="";
        for(int i=0;i<n;i++)
        {
            if(s1.size()==k)
            {
                ans.push_back(s1);
                s1.clear();
            }
            s1+=s[i];
        }
        if(s1.size()==k)
        ans.push_back(s1);
        else
        {
            for(int i=s1.size();i<k;i++) s1+=f;
            ans.push_back(s1);
        }
        return ans;
        
    }
};