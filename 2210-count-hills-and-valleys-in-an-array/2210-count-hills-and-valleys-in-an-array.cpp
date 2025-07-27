class Solution {
public:
    int countHillValley(vector<int>& v) {
        int n=v.size();
        vector<int> a;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]!=v[i+1]) a.push_back(v[i]);
        }
        a.push_back(v[n-1]);
        int ans=0;
        for(int i=1;i<a.size()-1;i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1] || a[i]<a[i-1] && a[i]<a[i+1]) ans++;
        }
        return ans;

        
    }
};