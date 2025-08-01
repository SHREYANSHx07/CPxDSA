class Solution(object):
    def makeFancyString(self, s):
        n = len(s)
        ans = ""
        x=0
        for i in range (0,n-1):
            if s[i]==s[i+1]:
                x+=1
            else:
                if x==0:
                    ans+=s[i]
                else:
                    ans+=s[i-1]
                    ans+=s[i-1]
                x=0
        if x==0:
            ans+=s[n-1]
        else:
            ans+=s[n-1]
            ans+=s[n-1]
        return ans
        """
        :type s: str
        :rtype: str
        """
        