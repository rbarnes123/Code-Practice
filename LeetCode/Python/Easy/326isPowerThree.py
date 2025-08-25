class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        # checks each power of three from 1 ->n
        # if number > n  occurs without being equal at some point, it is not a power of three
        number = 1
        if n <= 0 :return False
        elif n == 1 :return True
        while number < n:
            number *= 3
            if number == n:
                return True
        return False