class Solution:
    def tribonacci(self, n: int) -> int:
        first = 0
        second = 1
        current = 1
        if (n == 0):
            return first
        for i in range(2, n):
            tmp_current = current
            tmp_second = second
            current += second + first
            second = tmp_current
            first = tmp_second
        return current