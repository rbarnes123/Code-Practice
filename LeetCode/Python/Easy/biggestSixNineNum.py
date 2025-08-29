class Solution:
    def maximum69Number (self, num: int) -> int:
        # converts int to string so it can be iterated over
        ints = str(num)
        final = ""
        earliestSix = len(ints)
        # finds first occurance of a 6 and turns it into a 9
        for i in range(len(ints)):
            if ints[i] == "6" and i < earliestSix:
                earliestSix = i
            if(i == earliestSix):
                final = final + "9"
            else:
                final = final + ints[i]
        # returns new highest possible num
        return int(final)
            
        