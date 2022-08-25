class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        ind = 0
        b = True
        for i in range(len(word)):
            if word[i]==ch:
                ind = i
                b = False
                break;
        if b:
            return word
        res = word[0:i+1]
        res = res[::-1]
        res += word[i+1::]
        return res