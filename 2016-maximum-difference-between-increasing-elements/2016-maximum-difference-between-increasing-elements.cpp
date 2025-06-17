class Solution {
public:
    int maximumDifference(vector<int>& v) {
        int x=v[0];
        int ans=0;
        for(int i=1;i<v.size();i++)
        {
            ans=max(ans,v[i]-x);
            x=min(x,v[i]);
        }
        if(ans==0)
        return -1;
        return ans;
        
    }
};