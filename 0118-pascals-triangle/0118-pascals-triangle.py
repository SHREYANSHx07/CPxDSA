class Solution(object):
    def generate(self, n):
        ans = []
        v = [1]
        ans.append(v)
        
        for i in range (1,n):
            u = []
            u.append(1)
            for j in range (len(v)-1):
                u.append(v[j]+v[j+1])
            u.append(1)
            ans.append(u)
            v=u

        return ans

        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        