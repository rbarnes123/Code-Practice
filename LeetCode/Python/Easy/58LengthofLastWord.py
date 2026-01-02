class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        # split into words
        s = s.split(" ")
        # ignore trailing white spaces
        for i in range(len(s) - 1,-1,-1):
            # return last word(first encountered at the end of list)
            if s[i].isalpha():
                return len(s[i])