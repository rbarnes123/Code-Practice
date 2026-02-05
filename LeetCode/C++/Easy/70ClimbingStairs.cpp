class Solution {
public:
    int climbStairs(int n) {
       int ways[] = {1,1};
       int climbed = 1;
       // next floor is n-1 + n-2 ways
       while (climbed < n)
       {
         int next = ways[0] + ways[1];
         ways[0] = ways[1];
         ways[1] = next;
         climbed++;
       }
       return ways[1];
    }
};