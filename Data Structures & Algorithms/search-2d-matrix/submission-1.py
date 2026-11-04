class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        firstcol = [row[0] for row in matrix]
        left, right = 0, len(firstcol) - 1
        # print(firstcol)
        while left <= right:
            mid = left + (right-left)//2
            # print(left)
            # print(right)
            if firstcol[mid] == target:
                return True
            elif firstcol[mid] < target:
                left += 1
            else:
                right -= 1
        
        searchrow = matrix[right]
        # print(searchrow)
        left, right = 0, len(searchrow) - 1
        while left <= right:
            mid = left + (right-left)//2
            if searchrow[mid] == target:
                return True
            elif searchrow[mid] < target:
                left += 1
            else:
                right -= 1

        return False