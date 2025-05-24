class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        int n=v.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++) m[v[i]]=i;
        int x=-1,y=-1;
        for(int i=0;i<n;i++)
        {
            if(m.find(t-v[i])!=m.end())
            {
                x=i;
                y=m[t-v[i]];
                if(x!=y)
                break;
            }
        }
        vector<int> ans;
        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};