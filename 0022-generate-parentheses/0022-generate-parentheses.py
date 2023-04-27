class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        def fun(s, op, clo, t, n):
            if len(t) == 2*n:
                s.append(t)
                return
            if op < n:
                fun(s, op+1, clo, t+"(", n)
            if clo < op:
                fun(s, op, clo+1, t+")", n)
            
        s = []
        fun(s, 0, 0, "", n)
        return s