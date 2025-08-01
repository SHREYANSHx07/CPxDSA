class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        vector<int> v;
        v.push_back(1);
        ans.push_back(v);
        for(int i=1;i<n;i++)
        {
            vector<int> u;
            u.push_back(1);
            for(int j=0;j<v.size()-1;j++) u.push_back(v[j]+v[j+1]);
            u.push_back(1);
            ans.push_back(u);
            v=u;
        }
        return ans;

        
    }
};