class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        di = {}
        for ele in nums:
            if ele not in di:
                di[ele] = 1
        for i in range(1, len(nums)+1):
            if i not in di.keys():
                return i
        return len(nums)+1