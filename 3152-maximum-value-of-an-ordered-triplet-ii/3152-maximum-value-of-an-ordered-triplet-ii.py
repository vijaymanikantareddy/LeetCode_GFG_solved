class Solution:
    def maximumTripletValue(self, nums: List[int]) -> int:
        n=len(nums)
        ans=0
        r=[]
        l=[]
        lmax = nums[0]
        for i in range(n):
            l.append(lmax)
            if nums[i]>lmax:
                lmax=nums[i]
        rmax=nums[n-1]
        for i in range(n-1,-1,-1):
            r.append(rmax)
            if nums[i]>rmax:
                rmax=nums[i]
        r = r[::-1]
        for i in range(1,n-1):
            ans=max(ans,(l[i]-nums[i])*r[i])
        return ans