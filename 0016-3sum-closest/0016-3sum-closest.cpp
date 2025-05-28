class Solution {
public:
    int threeSumClosest(vector<int>& v, int t) {
        int n=v.size();
        //sort(v.begin(),v.end());
        int ans=INT_MAX,ans1=INT_MAX;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    int x=v[i]+v[j]+v[k];
                    if(ans1>abs(x-t))
                    {
                        ans=x;
                        ans1=abs(x-t);
                    }
                    //ans=min(ans,abs(x-t));
                }
            }
        }
        return ans;
        
    }
};