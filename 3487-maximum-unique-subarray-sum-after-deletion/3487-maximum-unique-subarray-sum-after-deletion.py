class Solution(object):
    def maxSum(self, v):
        n = len(v)
        s = set(v)
        x=0
        ans=0
        ans1=-101
        for j in s:
            if j>0:
                x+=1
                ans+=j
            else:
                ans1=max(ans1,j)

        if x!=0:
            return ans
        else:
            return ans1
        
        
        """
        :type nums: List[int]
        :rtype: int
        """
        