class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        prefix = ""
        if strs[0] == "":
            return prefix
        for string in zip(*strs):
            char = string[0]
            for i in range(len(string)):
                if string[i] != char:
                    return prefix
            prefix += char
        return prefix