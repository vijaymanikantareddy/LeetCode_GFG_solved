class Solution:
    def hasGroupsSizeX(self, deck: List[int]) -> bool:
        def gcd(a, b):
            while b:
                if a>b:
                    a,b=b,a
                b%=a
            return a
        
        dic={}
        for i in deck:
            if i not in dic:
                dic[i]=1
            else:
                dic[i]+=1
        res=dic[deck[0]]
        for v in dic.values():
            res = gcd(res, v)
        
        if res==1:
            return False
        else:
            return True