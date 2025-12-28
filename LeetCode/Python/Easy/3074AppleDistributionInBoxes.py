class Solution:
    def minimumBoxes(self, apple: List[int], capacity: List[int]) -> int:
        capacity.sort()
        boxesUsed = 0 
        totalApples = 0
        # get number of apples needed to pack
        for a in apple:
            totalApples += a
        # fill largest box with apples
        while totalApples > 0:
            totalApples -= capacity[-1]
            boxesUsed += 1
            capacity.pop(-1)
        return boxesUsed