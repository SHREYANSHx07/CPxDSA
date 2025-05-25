class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        if(n<=k && m<=k)
        return 0;
        else if(n<=k && m>k && m<=2*k)
        return k*(m-k);
        else if(m<=k && n>k && n<=2*k)
        return k*(n-k);
        else
        return -1;
        
    }
};