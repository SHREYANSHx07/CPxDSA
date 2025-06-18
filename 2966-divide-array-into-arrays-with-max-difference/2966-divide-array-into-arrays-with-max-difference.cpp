class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& v, int k) {
        vector<vector<int>> ans;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i+=3)
        {
            vector<int> u;
            u.push_back(v[i]);
            u.push_back(v[i+1]);
            u.push_back(v[i+2]);
            if((v[i+1]-v[i])>k || v[i+2]-v[i+1]>k || v[i+2]-v[i]>k)
            {
                return {};
            }
            ans.push_back(u);
        }
        return ans;
        
    }
};