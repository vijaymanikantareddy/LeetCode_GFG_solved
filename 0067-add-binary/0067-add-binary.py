class Solution:
    def addBinary(self, a: str, b: str) -> str:
        res = ''
        a = a[::-1]
        b = b[::-1]
        carry = 0
        for i in range(max(len(a), len(b))):
            digita = ord(a[i]) - ord('0') if i<len(a) else 0
            digitb = ord(b[i]) - ord('0') if i<len(b) else 0

            total = digita + digitb + carry
            res = str(total%2) + res
            carry = total//2
        if carry:
            res = '1'+res
        return res
