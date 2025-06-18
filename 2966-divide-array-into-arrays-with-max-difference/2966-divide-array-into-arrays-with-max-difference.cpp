class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& v, int k) {
        vector<vector<int>> ans;
        sort(v.begin(),v.end());
        int ans1=0;
        for(int i=0;i<v.size();i+=3)
        {
            vector<int> u;
            u.push_back(v[i]);
            u.push_back(v[i+1]);
            u.push_back(v[i+2]);
            if((v[i+1]-v[i])>k || v[i+2]-v[i+1]>k || v[i+2]-v[i]>k)
            {
                ans1=1;
                break;
            }
            ans.push_back(u);
        }
        vector<vector<int>> ans2;
        if(ans1==1)
        return ans2;
        return ans;
        
    }
};