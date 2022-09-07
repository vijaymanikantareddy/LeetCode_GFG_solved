class Solution:
    def convertToTitle(self, n: int) -> str:
        res=""
        while n>0:
            d = n%26
            if d==0:
                res = 'Z'+res
                n = n//26 - 1
            else:
                res = chr(64+d)+res
                n=n//26
        return res