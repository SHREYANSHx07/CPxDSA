class Solution {
public:
    int findLHS(vector<int>& v) {
        int n=v.size();
        // int x=-1;
        // for(int i=0;i<n;i++) x=max(x,v[i]);
        // vector<int> v1(x+1,0);
        // for(int i=0;i<n;i++)
        // {
        //     v1[v[i]]++;
        // }
        // int ans=0;
        // for(int i=0;i<x;i++)
        // {
        //     if(v1[i]>0 && v1[i+1]>0)
        //     {
        //         ans=max(ans,v1[i]+v1[i+1]);
        //     }
        // }
        // return ans;
        map<int,int> m;
        vector<pair<int,int>> vp;
        for(int i=0;i<n;i++) m[v[i]]++;
        for(auto i:m) vp.push_back({i.first,i.second});
        int ans=0;
        for(int i=0;i<vp.size()-1;i++)
        {
            if(vp[i].first==vp[i+1].first-1)
            ans=max(ans,vp[i].second+vp[i+1].second);
        }
        return ans;

    }
};