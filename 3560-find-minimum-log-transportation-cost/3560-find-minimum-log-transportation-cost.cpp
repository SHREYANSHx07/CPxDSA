class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long ans;
        if(n<=k && m<=k)
        return 0;
        else if(n<=k && m>k && m<=2*k)
        ans = (long long)k*(long long)((m-k));
        else if(m<=k && n>k && n<=2*k)
        ans =(long long)k*(long long)(n-k);
        else
        ans= -1;
        return ans;
        
    }
};