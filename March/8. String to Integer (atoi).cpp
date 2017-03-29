class Solution {
public:
    int myAtoi(string str) {
    	long long res = 0;
    	int count=0, flag=1;
    	for (size_t i = 0; i<str.size(); i++){
    		if ((isspace(str[i]) && count == 0)){//空格
    			continue;
    		}else if (str[i] == '-' && count == 0){//负号
    			count++;
    			flag = -1;
    		}
    		else if (str[i] == '+' && count == 0){//正号
    			count++;
    		}
    		else if (isdigit(str[i])){//数字
    			res = res * 10 + str[i] - '0';
    			count++;
    		}
    		else{
    			break;
    		}
    		if (res * flag < INT_MIN)
    		{
    			return INT_MIN;
    		}
    		else if (res*flag > INT_MAX){
    			return INT_MAX;
    		}
    	}
    	return res*flag;
    }
};