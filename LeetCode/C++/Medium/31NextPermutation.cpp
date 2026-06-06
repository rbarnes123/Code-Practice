class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        size_t breakIndex = nums.size() - 1 ;
        int temp;
        if(nums.size() == 1){
            return;
        }
        // find first swappable num(smaller than number on its right)
        for(size_t i = nums.size() - 1; i > 0; i--){
            if(nums[i-1] < nums[i]){
                breakIndex = i-1;
                break;
            }
        }
        // get smallest number > break to swap
        size_t smallestIndex;
        bool smallInit = false;
        for(size_t i = nums.size() - 1; i > breakIndex; i--){
            if(nums[i] > nums[breakIndex]){
                if(!smallInit){
                    smallInit = true;
                    smallestIndex = i;
                }else{
                    if(nums[i] < nums[smallestIndex]){
                        smallestIndex = i;
                    }
                } 
            }
        }
        // if no next permutation, sort in ascending order
        if(breakIndex == nums.size() - 1){
            sort(nums.begin(),nums.end());
            return;
        }else{
            // swap
            temp = nums[breakIndex];
            nums[breakIndex] = nums[smallestIndex];
            nums[smallestIndex] = temp;

            // reverse numbers to the right of break
            size_t right = nums.size() - 1, left = breakIndex + 1;
            while(left < right){
                if(nums[left] >  nums[right]){
                    temp = nums[left];
                    nums[left] = nums[right];
                    nums[right] = temp;
                }
                    right--;
                    left++;
            }
            return;
        }
    }
};