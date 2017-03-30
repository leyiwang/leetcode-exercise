class Solution {
public:
    bool checkPerfectNumber(int num) {
    	int res = 0;
    	if(num==1) return false;
    	for (int i = sqrt(num); i>1; i--){
    		if (num % i == 0){
    			res = res + num / i + i;
    		}
    		if (res >= num) return false;
    	}
    	return res == num - 1 ? true : false;
    }
};