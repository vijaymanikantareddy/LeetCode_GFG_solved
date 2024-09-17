class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        di = {}
        s1 = s1.split()
        s2 = s2.split()
        for s in s1:
            if s not in di:
                di[s] = 1
            else:
                di[s] += 1
        for s in s2:
            if s not in di:
                di[s] = 1
            else:
                di[s] += 1
        res = []
        for k, v in di.items():
            if v == 1:
                res.append(k)
        return res