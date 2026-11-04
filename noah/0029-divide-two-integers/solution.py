class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        if divisor == 0:
            raise ZeroDivisionError

        negative = (dividend < 0) != (divisor < 0)
        remainder = abs(dividend)
        divisor = abs(divisor)
        quotient = 0

        while remainder >= divisor:
            chunk = divisor
            value = 1

            while remainder >= (chunk << 1):
                chunk <<= 1
                value <<= 1

            remainder -= chunk
            quotient += value

        if negative:
            quotient = -quotient

        return max(-(1 << 31), min(quotient, (1 << 31) - 1))