class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& v, int key, int k) {
        int n=v.size();
        vector<int> v1;
        for(int i=0;i<n;i++)
        {
            if(v[i]==key) v1.push_back(i);
        }
        set<int> s;
        for(int i=0;i<v1.size();i++)
        {
            int x=max(0,v1[i]-k),y=min(n-1,v1[i]+k);
            for(int j=x;j<=y;j++) s.insert(j);
        }
        vector<int> ans;
        for(auto i:s) ans.push_back(i);
        return ans;
        
    }
};