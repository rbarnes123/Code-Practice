class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        # goes length of each string times
        deleteCount = 0
        for i in range(len(strs[0])):
            # check if each column is sorted
            for j in range(len(strs) - 1):
                if not strs[j][i] <= strs[j+1][i]:
                    deleteCount += 1
                    break
        return deleteCount