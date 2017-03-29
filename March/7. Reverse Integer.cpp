class Solution {
public:
    int reverse(int x) {
    	int res = 0, temp=0;
    	while (x){
    		temp = res;
    		res = res * 10 + x % 10;
    		x /= 10;
    		if (res / 10 != temp){
    			return 0;
    		}
    	}
    	return res;
    }
};