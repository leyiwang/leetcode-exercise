class Solution {
public:
    int searchInsert(vector<int> &nums, int target)
    {
        size_t end = nums.size();
        for(size_t i=0;i<end;i++){
            if(nums[i]==target){
                return i;
            }
            else if(nums[i]<target && i+1<end && nums[i+1]>target)
            {
                return i+1;
            }
        }
        return target < nums[0]?0:nums.size();
    }
};