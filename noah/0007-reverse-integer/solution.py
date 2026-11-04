class Solution:
    def reverse(self, x: int) -> int:
        neg = x < 0
        rev = str(abs(x))[::-1]
        rev = int(rev)
        if neg:
            rev = -rev
        if rev >= (-2)**31 and rev <= 2**31 - 1:
            return rev
        return 0