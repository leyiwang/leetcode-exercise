class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(size_t i=0;i<nums.size();i++){
            for(size_t j=0;j<nums.size();j++){
                if(i!=j&&(nums[i]+nums[j])==target){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};