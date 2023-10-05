class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        mp = {}
        res = []
        l = len(nums)
        for n in nums:
            if n in mp:
                mp[n] += 1
            else:
                mp[n] = 1
        for k, v in mp.items():
            if v > (l//3):
                res.append(k)
        return res