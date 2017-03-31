class Solution {
public:
    bool find132pattern(vector<int> &nums) {
    	int size = nums.size(), temp;
    	if (size < 3) return false;
    	vector<int> min_val, max_val;
    	min_val.push_back(nums[0]);
    	max_val.push_back(nums[size - 1]);
    	for (int k = 1; k < size; k++) {
    		temp = nums[k] < min_val[k - 1] ? nums[k] : min_val[k - 1];
    		min_val.push_back(temp);
    		temp = nums[size - 1 - k] > max_val[k - 1] ? nums[size - 1 - k]: max_val[k - 1];
    		max_val.push_back(temp);
    	}
    	reverse(max_val.begin(), max_val.end());
    	for (int i = size - 2; i > 0; i--) {
    		temp = min_val[i - 1]; // the min value of left part
    		if (nums[i] <= temp)
    			continue;
    		for (int j = i + 1; j < size; j++) {
    			if (nums[j] > temp && nums[j] < nums[i]) {
    				return true;
    			}
    		}
    	}
    	return false;
    }
};