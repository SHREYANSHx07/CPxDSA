class Solution {
public:
    long long sumOfLargestPrimes(string s) {
        int n=s.size();
        long long ans=0;
        set<long long> st;
        vector<long long> v;
        for(int i=0;i<n;i++)
        {
            string s1="";
            for(int j=i;j<n;j++)
            {
                s1+=s[j];
                long long x=stoll(s1);
                int y=1;
                for(int k=2;k<=sqrt(x);k++)
                {
                    if(x%k==0)
                    {
                        y=0;
                        break;
                    }
                }
                if(y==1 && x>1)
                {
                    cout<<x<<" ";
                    st.insert(x);
                }
            }
        }
        for(auto i:st) v.push_back(i);
        sort(v.rbegin(),v.rend());
        int k1=3;
        if(v.size()<3)
        k1=v.size();
        for(int i=0;i<k1;i++) ans+=v[i];
        
        //cout<<s2<<'\n';
        return ans;
        
    }
};