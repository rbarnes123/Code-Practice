class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        maxLen = 0
        setPtr = 0
        seen = set()
        # check for case of 0 or 1 character
        if len(s) == 0 :
            return 0
        if len(s) == 1:
            return 1
        # adds to set only if not seen yet
        for i in range(len(s)):
            if s[i] not in seen:
                seen.add(s[i])
                if(len(seen) > maxLen):
                    maxLen = len(seen)
            else:
                # remove everthing from set until duplicate is gone
                while s[i] in seen:
                    seen.remove(s[setPtr])
                    setPtr += 1 
                # re add character after duplicates removed
                seen.add(s[i])
                if(len(seen) > maxLen):
                    maxLen = len(seen)
        return maxLen