#Leetcode link: https://leetcode.com/problems/two-sum/
#Written 2020/10/25
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dict1 = dict()
        for i in range (len(nums)):
            rest = target - nums[i]
            if rest in dict1.values():
                return list(dict1.values()).index(rest),i
            dict1[i] = nums[i]
        return None
