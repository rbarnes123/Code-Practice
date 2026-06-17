class Solution {
public:
    int shift(vector<int>& nums1,int zeroIndex, int target){
        for(size_t j = zeroIndex; j > target; j--){
            int temp = nums1[j];
            nums1[j] = nums1[j-1];
            nums1[j-1] = temp;
        }
        return ++zeroIndex;
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int zeroIndex = m;
        int n2Index = 0;
        // place all numbers in num2 that are < nums1
        for(size_t i = 0; i < nums1.size(); i++){
            if(n2Index >= n){
                return;
            }
            if(nums2[n2Index] <= nums1[i]){
                // shift then place
                zeroIndex = shift(nums1,zeroIndex,i);
                nums1[i] = nums2[n2Index];
                n2Index++;
            }
        }
        //place remaining values
        for(; zeroIndex < nums1.size();zeroIndex++){
            nums1[zeroIndex] = nums2[n2Index];
            n2Index++;
        }
    }
};