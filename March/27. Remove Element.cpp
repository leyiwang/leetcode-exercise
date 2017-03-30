class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    	int len = nums.size();
    	vector<int>::iterator iter = nums.begin();
    	while(iter != nums.end()){
    		if (*iter == val){
    			len--;
    			iter = nums.erase(iter);
    		}
    		else iter++;
    	}
    	return len;
    }
};