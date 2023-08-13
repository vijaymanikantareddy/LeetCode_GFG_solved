class Solution:
    def arrangeCoins(self, n: int) -> int:
        i, cnt = 1, 0
        while n > 0:
            cnt += 1
            n -= i
            if n == 0:
                return cnt
            i += 1
        return cnt-1