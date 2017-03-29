class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    	int low = 0, heigh = nums.size() - 1, mid, k;
    	vector<int> res = { -1, -1 };
    	while (low <= heigh){
    		mid = (low + heigh) / 2;
    		if (nums[mid] < target){
    			low = mid + 1;
    		}else if (nums[mid] > target){
    			heigh = mid - 1;
    		}else{
    			res[0] = mid;
    			res[1] = mid;
    			k = mid - 1;
    			while (k >= 0 && nums[k] == target){
    				k--;
    				res[0]-- ;
    			}
    			res[0] = k + 1;
    			k = mid + 1;
    			while (k < nums.size() && nums[k] == target){
    				k++;
    				res[1]++;
    			}
    			break;
    		}
    	}
    	return res;
    }
};