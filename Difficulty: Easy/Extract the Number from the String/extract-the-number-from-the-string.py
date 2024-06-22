class Solution:
    def ExtractNumber(self,sentence):
        #code here
        def isnum(s):
            for i in s:
                if i not in "123456780":
                    return False
            return True
        arr = sentence.split(" ")
        arr = [a for a in arr if isnum(a)]
        if len(arr) == 0:
            return -1
        res = [int(a) for a in arr if len(a) > 0]
        return str(max(res))


#{ 
 # Driver Code Starts
t = int(input())
for _ in range(t):
    S = input()
    ob = Solution()
    ans = ob.ExtractNumber(S)
    print(ans)

# } Driver Code Ends