class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    	if (nums.size() <= 1){
    		return nums.size();
    	}
    	int temp = 1, count = 0;
    	for (int i = 1; i<nums.size(); i++){
    		if (nums[i] != nums[count]){
    			temp = 1;
    			count++;
    			nums[count] = nums[i];
    		}
    		else if (nums[i] == nums[count] && temp<2){
    			temp++;
    			count++;
    			nums[count] = nums[i];
    		}
    	}
    	return ++count;
    }
};