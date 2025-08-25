class Solution:
    def minimumArea(self, grid: List[List[int]]) -> int:
        # holds coordinates of squares with ones
        ones = []
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 1:
                    ones.append([i,j])
        if len(ones) == 1:
            return 1 
        # finds min and max for rows and columns with ones
        minRow = min(x for x, y in ones)
        maxRow = max(x for x, y in ones)
        minCol = min(y for x, y in ones)
        maxCol = max(y for x, y in ones)

        area = (maxRow - minRow + 1) * (maxCol - minCol + 1)
        return area 
        