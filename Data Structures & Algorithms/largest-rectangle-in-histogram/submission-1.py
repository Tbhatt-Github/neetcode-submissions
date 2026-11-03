class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        max_area = 0
        stk = []
        n = len(heights)
        for i in range(n):
            if not stk: # empty
                stk.append([i, heights[i]])
            else:
                lbound = i
                while stk and heights[i] < stk[-1][1]:
                    area = stk[-1][1]*(i - stk[-1][0])
                    max_area = max(max_area, area)
                    lbound = stk[-1][0]
                    stk.pop()
                    # lbound -= 1
                stk.append([lbound, heights[i]])

        while stk:
            area = stk[-1][1]*(n - stk[-1][0])
            max_area = max(max_area, area)
            stk.pop()

        return max_area