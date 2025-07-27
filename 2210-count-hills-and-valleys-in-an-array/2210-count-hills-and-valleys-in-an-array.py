class Solution:
    def countHillValley(self, v):
        n = len(v)
        a=[]
        for i in range (0,n-1):
            if v[i] != v[i+1]:
                a.append(v[i])
        ans = 0
        a.append(v[n-1])
        for i in range (1,len(a)-1):
            if a[i]>a[i-1] and a[i]>a[i+1] or a[i]<a[i-1] and a[i]<a[i+1]:
                ans+=1
        return ans
        