class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if n <= 0: return False
        else:
            # powers of two in binary should only have one 1 
            return bin(n).count("1") == 1