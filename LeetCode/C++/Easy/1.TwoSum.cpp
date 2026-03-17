#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // keep track of first time element is seen and its index
        unordered_map <int,int> seen;
        unordered_map <int,int> :: iterator it;
        int opposite;
        for(int i = 0; i < nums.size(); i++){
            seen.insert({nums[i],i});
            opposite = target - nums[i];
            // check if other num has been seen
            it = seen.find(opposite);
            if(it != seen.end()){
                // avoid using same element twice
                if(i != it->second){
                    return{i,it->second};
                }
            }
        }
        return {0,0};
    }
};