class Solution:
    def convert(self, s: str, numRows: int) -> str:
        # handle edge case
        if numRows == 1 or numRows > len(s):
            return s
        # use row height to build strings and then combine them
        rowNum = 1
        reverse = False
        # create substring for each row
        strings = [""] * numRows
        #add chars to substrings
        for char in s: 
            #sets flag for counting up or down
            if rowNum == 1 and reverse:
                reverse = False
            elif rowNum == numRows and reverse == False:
                reverse = True
            # add to substring
            strings[rowNum - 1] += char
            # move up or down the rows
            if reverse: 
                rowNum -=1
            else:
                rowNum +=1
        #combine substrings
        return "".join(strings)