class Solution {
public:
    int maximumLength(vector<int>& v) {
        int y=0,x=0,n=v.size();
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2==0) x++;
            else y++;
        }
        int ans=max(x,y);
        int x1=0,y1=0,z=0;
        if(v[0]%2==0)
        {
            z=0;
            x1++;
        }
        else
        {
            z=1;
            y1++;
        }
        for(int i=1;i<n;i++)
        {
            if(v[i]%2==0 && z==1)
            {
                z=0;
                x1++;
            }
            else if(v[i]%2==1 && z==0)
            {
                y1++;
                z=1;
            }
        }
        ans=max(ans,x1+y1);
        return ans;
        
    }
};