class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& v, int k) {
        vector<vector<int>> ans;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i+=3)
        {
            if((v[i+1]-v[i])>k || v[i+2]-v[i+1]>k || v[i+2]-v[i]>k)
            {
                return {};
            }
            ans.push_back({v[i],v[i+1],v[i+2]});
        }
        return ans;
        
    }
};