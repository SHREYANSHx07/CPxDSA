class Solution {
public:
    long long distributeCandies(int n, int l) {
        long long ans=0;
        if(3*l<n)
        return 0;
        else if(3*l == n)
        return 1;
        else
        {
            int x=max(0,n-2*l),y=min(n,l);
            for(int i=x;i<=y;i++)
            {
                int j=max(0,n-i-l),k=min(n-i,l);
                ans+=(k-j+1);
            }
            return ans;
        }


        
    }
};