#User function Template for python3


class Solution:
    def nextHappy (self, N):
        # code here
        def fun(n):
            s = 0
            while n:
                d = n%10
                s += (d*d)
                n //=10;
            if s <= 9:
                return s
            else:
                return fun(s)
        
        t = N+1
        while (fun(t) != 1) and (fun(t) != 7):
            t += 1
        return t;


#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())

        ob = Solution()
        print(ob.nextHappy(N))
# } Driver Code Ends