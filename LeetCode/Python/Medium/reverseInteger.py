class Solution:
    def reverse(self, x: int) -> int:
        x = list(str(x))

        for i in range(0,len(x) // 2):
            if(x[0] == '-'):
                temp = x[len(x) - i - 1]
                x[len(x) - i - 1] = x[i+1]
                x[i+1] = temp
            else:
                temp = x[len(x) - i - 1]
                x[len(x) - i - 1] = x[i]
                x[i] = temp
        x = ''.join(x)
        x = int(x)
        if(x < -2147483648 or x > 2147483648):
            return 0
        return x