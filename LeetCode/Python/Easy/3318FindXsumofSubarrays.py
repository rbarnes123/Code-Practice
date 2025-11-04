class Solution:
    def findXSum(self, nums: List[int], k: int, x: int) -> List[int]:
        
        left = 0
        right = k-1
        frequency = {}
        answer = []
        # n - k subarrays
        while right < len(nums):
            # k nums
            # can update this later to be a sliding window
            frequency.clear()
            xSum = 0
            # gets frequency of each item in subarray
            for L in range(left,right + 1):
                if nums[L] not in frequency:
                    frequency[nums[L]] = 1
                else:
                    frequency[nums[L]] += 1
            # x times, find max
            for i in range(x):
                if frequency:
                    maxVal = max(frequency.values())
                    #get keys with maxVal
                    keysWithMax = [k for k, v in frequency.items() if v == maxVal]
                    maxKey = max(keysWithMax)
                    xSum += (maxKey * frequency[maxKey])
                    # remove num that was already added 
                    frequency.pop(maxKey)
            answer.append(xSum)
            # move to next subarray
            left += 1
            right += 1
        return answer