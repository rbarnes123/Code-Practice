class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        # binary search pick one in middle
        # upper and lower limit(shrinks to one value)
        minimum = 0
        maximum = len(nums) - 1

        while minimum <= maximum:
            index = (maximum + minimum) // 2
            if nums[index] > target:
                maximum = index -1
            elif nums[index] < target:
                minimum = index + 1
            else:
                return index
        # return index of either min or max if number not found(this is where number should be inserted)
        return minimum
