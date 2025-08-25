class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        # checks if even by comparing bits to a mask
        if n <=0 :return False
        mask = 0b101010101010101010101010101010101
        if (n &(n-1) == 0) and ((n & mask) != 0 ) :
            return True
        else: return False