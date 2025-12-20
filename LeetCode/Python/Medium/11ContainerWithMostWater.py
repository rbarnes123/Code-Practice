class Solution:
    def maxArea(self, height: List[int]) -> int:
        # two pointers
        leftIndex = 0 
        rightIndex = len(height) - 1
        maxArea = 0
        #greedy but keep the larger of the two heights and move opposite pointer 
        while leftIndex < rightIndex:
            left = height[leftIndex]
            right = height[rightIndex]
            # calculate and update Max area
            length = rightIndex - leftIndex
            area = min(right,left) * length
            if area >= maxArea: maxArea = area
            # move pointer
            if right > left:
                leftIndex += 1
            else:
                rightIndex -= 1

        return maxArea