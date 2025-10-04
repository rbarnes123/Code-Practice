class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        #holds nums the first time they are seen
        seen = set()
        write = 0
        # reads through each num
        for read in range(len(nums)):
            if nums[read] not in seen:
                seen.add(nums[read])
                # writes to appropriate index when the next unique number is found
                nums[write] = nums[read]
                write+=1
        del nums[write:]
        return len(nums)
