class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
       # letters on each numpad 
        letters = {'2':"abc",'3':"def",'4':"ghi",'5':"jkl",'6':"mno",
        '7':"pqrs",'8':"tuv",'9':"wxyz"}
        # holds each combination
        output = []

        # builds combinations in an array
        combination = [""] * len(digits)

        #recursively builds the combinations by cycling at each level in the array
        #similar to a gear ratio(slot 1 changes once slot two has fully come around)
        def iterate(comboIndex):
            # base case: full combination
            if comboIndex == len(digits):
                output.append("".join(combination))
                return
            
            digit = digits[comboIndex]
            for letter in letters[digit]:
                combination[comboIndex] = letter
                iterate(comboIndex + 1)
        iterate(0)
        return output