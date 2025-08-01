class Solution {
public:
    int subarrayBitwiseORs(vector<int>& v) {
        int n=v.size(),ans=0;
        unordered_map<int,int> m1,m;
        for(int i=0;i<n;i++)
        {
            unordered_map<int,int> m2;
            m2[v[i]]++;
            m[v[i]]++;
            for(auto j:m1)
            {
                int z=v[i]|j.first;
                m2[z]++;
                m[z]++;
            }
            m1=m2;
        }
        return m.size();
    }
};