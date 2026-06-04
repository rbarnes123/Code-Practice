class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // holds triplets that work
        vector<vector<int>> solution;
        set<vector<int>> triplets;
        int left,right = nums.size() - 1,fixed = 1,sum;
        // check for empty nums list
        if(nums.size() == 0){
            return solution;
        }
        // sort
        sort(nums.begin(),nums.end());
        // move fixed
        while(fixed < nums.size()){
            left = 0;
            right = nums.size() - 1;
            // move LR pointers
            while(left < fixed && right > fixed){
                sum = nums[left] + nums[fixed] + nums[right];
                if(sum == 0){
                    vector<int> triplet = {nums[left],nums[fixed], nums[right]};
                    auto result = triplets.insert(triplet);
                    if(result.second){
                        solution.push_back(triplet);
                    }
                    if(nums[fixed] < 0){
                        left +=1;
                    }else{
                        right -=1;
                    }
                }else if(sum > 0){
                    right -= 1;
                }else{
                    left += 1;
                }
            }
            // moves fixed
            fixed +=1;
        }
        return solution;
    }
};