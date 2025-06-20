class Solution {
public:
    int maxDistance(string s, int k) {
        int a=0,b=0,c=0,d=0,ans1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='N') a++;
            else if(s[i]=='W') b++;
            else if(s[i]=='S') c++;
            else d++;
            int x=max(a,c),y=max(b,d),z=(a+b+c+d)-(x+y);
            int ans=x+y;
            if(k>=z)
            ans+=z;
            else
            {
                ans+=(2*k - z);
            }
            ans1=max(ans,ans1);
        }
        return ans1;
    }
};