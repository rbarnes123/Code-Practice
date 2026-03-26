class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReached = 0;
        for (int i = 0; i < nums.size(); i++) {
            // if can't jump further return
            if (i > maxReached) return false;
            // if current jump is better than previous ones update it
            maxReached = max(maxReached, i + nums[i]);
        }
        return true;
    } 
};