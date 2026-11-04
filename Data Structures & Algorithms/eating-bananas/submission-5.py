from math import ceil
class Solution:

    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        def eating(piles, speed):
            time = 0
            for bananas in piles:
                time += ceil(bananas/speed)
            return time

        left = 1
        right = max(piles)
        while left <= right:
            mid = left + (right-left)//2
            time = eating(piles, mid)
            # print(left)
            # print(right)
            if time > h:
                left = mid+1
            else:
                right = mid - 1

        return left