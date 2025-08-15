class Solution(object):
    def isPowerOfThree(self, n):
        if n==1:
            return True
        if n<1 or n%3!=0:
            return False
         
        while n>1:
            if n%3!=0:
                return False
            n/=3

        return True
        """
        :type n: int
        :rtype: bool
        """
        