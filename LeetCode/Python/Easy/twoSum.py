class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numDict = {}
        for i in range(len(nums)):
            if not(nums[i] in numDict):
                numDict[nums[i]] = i
            needed = target - nums[i]
            print("needed: ", needed)
            if(needed in numDict):
                if(numDict[needed] != i):
                    return [numDict[needed],i]
    