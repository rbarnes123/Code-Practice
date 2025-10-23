class Solution:
    def hasSameDigits(self, s: str) -> bool:
        ints = []
        #converts each char in s to an int
        for char in s:
            ints.append(int(char))
        # performs operations until check can be performed
        while len(ints) > 2:
            temp = []
            for i in range(len(ints) - 1):
                temp.append ((ints[i] +ints[i+1]) % 10)

            ints = temp
            
        if ints[0] == ints[1]:
            return True
        else:
            return False

