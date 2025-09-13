class Solution:
    def sortVowels(self, s: str) -> str:
        vowels = set("AEIOUaeiou")
        chars = list(s)
        sortedVowels = sorted([c for c in chars if c in vowels])
        VIndex = 0
        for i in range(len(chars)):
            if chars[i] in vowels:
                chars[i] = sortedVowels[VIndex]
                VIndex += 1

        chars = "".join(chars)
        return(str(chars))