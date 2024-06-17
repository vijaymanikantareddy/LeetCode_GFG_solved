#User function Template for python3

def isValid(s):
    #code here
    def fun(s):
        if len(s) == 0:
            return 0
        for i in s:
            if i not in "0123456789":
                return 0
        return 1
        
    arr = s.split(".")
    if len(arr) != 4:
        return 0
    for a in arr:
        # print(fun(a), a)
        if (fun(a) == 0) or (int(a) < 0 or int(a) > 255 or a != str(int(a))):
            return 0
    return 1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

    
if __name__=="__main__":
    t=int(input())
    for _ in range(0,t):
        s=input()
        if(isValid(s)):
            print(1)
        else:
            print(0)
    

# } Driver Code Ends