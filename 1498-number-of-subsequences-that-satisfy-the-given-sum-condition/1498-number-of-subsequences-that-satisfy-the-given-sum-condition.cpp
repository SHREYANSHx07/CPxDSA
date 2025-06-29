class Solution {
public:
    int numSubseq(vector<int>& v, int t) {
        long long m=1e9 +7;
        sort(v.begin(),v.end());
        //long long ans=0;
        vector<long long> v1;
        long long x=1;
        v1.push_back(x);
        for(int i=1;i<v.size();i++)
        {
            x*=(2ll);
            x%=m;
            v1.push_back(x);
        }
        long long l=0,r=v.size()-1,ans=0;
        while(l<=r)
        {
            if(v[l]+v[r] <=t)
            {
                ans=(ans+(v1[r-l]))%m;
                l++;
            }
            else r--;
        }
        return ans;
        

    }
};