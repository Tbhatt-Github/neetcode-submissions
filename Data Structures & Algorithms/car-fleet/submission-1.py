class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        m = {}
        n = len(position)
        for i in range(n):
            m[position[i]] = (target - position[i])/speed[i]

        sorted_m = dict(sorted(m.items(), key=lambda item: item[0]))
        ans = []
        for x in sorted_m.values():
            if len(ans) == 0:
                ans.append(x)
            else:
                while len(ans) != 0 and ans[-1] <= x:
                    ans.pop()
                ans.append(x)
        return len(ans)