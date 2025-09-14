class Solution {
public:
    vector<string> spellchecker(vector<string>& w, vector<string>& q) {
        unordered_map<string,int> m,m1,m2;
        
        for(int i=0;i<w.size();i++) m[w[i]]=i+1;
        for(int i=0;i<w.size();i++)
        {
            string s=w[i];
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            string s2=s;
            for(int j=0;j<s2.size();j++)
            {
                if(s2[j]=='a' || s2[j]=='e' || s2[j]=='i' || s2[j]=='o' || s2[j]=='u')
                {
                    s2[j]='*';
                }
            }
            if(m2[s2]==0)
            m2[s2]=i+1;
            if(m1[s]==0)
            m1[s]=i+1;
        }
        vector<string> ans;
        for(int i=0;i<q.size();i++)
        {
            if(m[q[i]]) ans.push_back(q[i]);
            else
            {
                string s1=q[i];
                transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
                if(m1[s1]) ans.push_back(w[m1[s1]-1]);
                else
                {
                    string s3=s1;
                    for(int j=0;j<s3.size();j++)
                    {
                        if(s3[j]=='a' || s3[j]=='e' || s3[j]=='i' || s3[j]=='o' ||s3[j]=='u' ) s3[j]='*';
                    }
                    if(m2[s3]) ans.push_back(w[m2[s3]-1]);
                    else ans.push_back("");
                }
            }
        }
        return ans;
        
    }
};
