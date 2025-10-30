class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        #check if needle cannot be in haystack
        if len(needle) > len(haystack): return -1
        else:
            # makes a dictionary of letters and shift amounts
            shiftDict = {}
            for i in range(len(needle)):
                # duplicates should be smallest shift without being 0
                if i == (len(needle) - 1):
                    if needle[i] not in shiftDict:
                        shiftDict[needle[i]] = len(needle) - 1
                else:
                    shiftDict[needle[i]] = len(needle) - 1 - i
            
            lastIndex = len(needle) - 1
            #controls shifting the word
            while lastIndex <= len(haystack) - 1:
                startIndex = lastIndex - len(needle) + 1
                # if last char matches loop through and keep checking
                for i in range(len(needle)):
                    if needle[-(i+1)] == haystack[lastIndex - i]:
                        # all letters have mactched, word found, return inde
                        if i == len(needle) - 1:
                            return startIndex
                    # mismatch found, shift by amount in shiftDict or whole word if not found
                    else:
                        if haystack[lastIndex - i] not in shiftDict:
                            lastIndex += len(needle) - i
                            break
                        else:
                            bad_char = haystack[lastIndex]
                            lastIndex += shiftDict.get(bad_char, len(needle))
                            break
            return -1