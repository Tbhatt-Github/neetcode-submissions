class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        ans = 0
        s = set(nums)
        for x in nums:
            if x-1 not in s:
                runlength = 1
                curr = x+1
                while curr in s:
                    runlength += 1
                    curr += 1
                ans = max(ans, runlength)

        return ans