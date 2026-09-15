class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        fre={}
        for i in range(0,len(nums)):
            req=target-nums[i]
            if req in fre:
                return [fre[req],i]
            fre[nums[i]]=i
        return []

        