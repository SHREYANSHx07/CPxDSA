class Solution {
public:
    int candy(vector<int>& r) 
    {
        int n=r.size();
        // vcetor<int> v(n),v1(n,0);
        // for(int i=1;i<n-1;i++)
        // {
        //    if(r[i-1]>r[i] && r[i+1]>r[i])
        //    v.push_back(i);
        // }
        // for(int i=0;i<v.size();i++)
        // {
        //     v1[v[i]]=1;
        //     v1[v[i]-1]=2;
        //     v1[v[i]+1]=2;
        // }
        vector<int> v(n,1);
        for(int i=1;i<n;i++)
        {
            if(r[i]>r[i-1])
            v[i]=(v[i-1]+1);
        }
        for(int i=n-2;i>=0;i--)
        {
            if(r[i]>r[i+1])
            v[i]=max(v[i],v[i+1]+1);
        }
        int ans=0;
        for(auto i:v) ans+=i;
        return ans;

    }

};