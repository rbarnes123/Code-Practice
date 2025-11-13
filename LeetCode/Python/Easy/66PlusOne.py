class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        # adds one to the last digit in the list
        negIndex = -1
        digits[negIndex] += 1
        # if the digit would be larger than 1-9 it splits it and into 1 and 0 and then adds to next one in the line 
        while digits[negIndex] == 10:
            if -1 *negIndex == len(digits):
                if digits[0] == 9 or digits[0] == 10:
                    digits[0] = 1
                    digits.append(0)
                else:
                    digits[0] += 1
            elif digits[negIndex] >= 9:
                digits[negIndex] = 0
                digits[negIndex -1] +=1
                negIndex -=1
            else:
                digits[negIndex] += 1
        return digits