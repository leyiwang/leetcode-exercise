class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size()<=1){
            return;
        }
        int size = nums.size();
        for(int i=size-2; i>=0; i--){
            for(int j=size-1; j>i;j--){
                if(nums[i] < nums[j]){
                    swap(nums[i], nums[j]);
                    sort(nums.begin()+i+1, nums.end());
                    return;
                }
            }
        }
        for (int i = 0; i<size / 2; i++){
            swap(nums[size - i - 1], nums[i]);
        }
    }
};