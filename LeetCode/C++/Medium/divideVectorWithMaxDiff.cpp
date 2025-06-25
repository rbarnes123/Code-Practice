class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        // sorts vector into ascending order so we can greedily add to minimize k of the groups
        std::sort(nums.begin(),nums.end());
        std::vector<std::vector<int>> divideArr;
        // adds numbers to vector in chunks of 3 only if they satisfy k
        for(int i = 0; i < nums.size(); i += 3){
            divideArr.push_back({nums[i],nums[i+1],nums[i+2]});
            if(nums[i+2] - nums[i] > k){
                divideArr.clear();
                return divideArr;
            }
        }
        return divideArr;
    }
};