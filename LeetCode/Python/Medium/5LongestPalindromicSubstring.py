class Solution:
    def longestPalindrome(self, s: str) -> str:
        longestPalin = ""
        # lets each char be a 'center' to be expanded about
        for i in range(len(s)):
            evenL, evenR = i,i
            oddL, oddR = i, i+1
            # handles case where palindrome's center is 2 or one character
            oddPal = self.expandFromCenter(oddL,oddR,s)
            evenPal = self.expandFromCenter(evenL,evenR,s)
            # updates longest palin to largest palindrome found
            if len(oddPal) > len(longestPalin) and len(oddPal) > len(evenPal):
                longestPalin = oddPal
            elif len(evenPal) > len(longestPalin) and len(evenPal) > len(oddPal):
                longestPalin = evenPal
        return longestPalin
    # given a point in s function expands checking for a palindrome    
    def expandFromCenter(self,left,right,s):
        endFlag = False
        palindrome = ""
        while endFlag == False:
            if left == -1 or right == len(s):
                endFlag = True
                break
            if s[left] == s[right]:
                if(left == right):
                    palindrome = s[left] + palindrome
                else:
                    palindrome = s[left] + palindrome + s[right]
            else:
                if palindrome == "":
                    palindrome = s[0]
                break

            left -=1
            right +=1
        return palindrome