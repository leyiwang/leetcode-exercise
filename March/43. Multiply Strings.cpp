class Solution {
public:
    // int str2int(string str){
    // 	int size = str.size(), res = 0;
    // 	for (int i = 0; i < size; i++){
    // 		res = res + (str[size - i - 1] - '0') * pow(10, i);
    // 	}
    // 	return res;
    // }
    
    vector<int> add(vector<int> res, vector<int> num2){
    	int temp = 0, sign = 0;
    	for (int i = 0; i < num2.size(); i++){
    		temp = res[i] + num2[i] + sign;
    		res[i] = temp % 10;
    		sign = temp / 10;
    		if (i == num2.size() - 1 && sign != 0){
    			num2.push_back(0);
    		}
    	}
    	return res;
    }
    string multiply(string num1, string num2) {
    	string res_str="0";
        vector<int> res;//reverse
        int size1 = num1.size(), size2 = num2.size();
    	int size = size1 + size2;
    	vector<int> final(size, 0);
        int temp = 0, m1, m2, sign = 0; 
        for(int i=0;i<num1.size();i++){
    		res.erase(res.begin(), res.end());
    		for (int k = 0; k < i; k++){
    			res.push_back(0);
    		}
        	m1 = num1[size1 - i - 1] - '0';
        	for(int j=0; j<num2.size(); j++){
        		m2 = num2[size2 - j - 1] - '0';
        		temp = m2 * m1 + sign;
        		res.push_back(temp % 10);
        		sign = temp / 10;
    		}
    		if (sign>0){
    			res.push_back(sign);
    			sign = 0;
    		}
    		final = add(final, res);
        }
    	int count = 0;
    	for (int i = final.size()-1; i >=0; i--){
    		if (count == 0 && final[i] != 0){ 
    		    count++;
    		    res_str="";
    		}
    		if (count!=0){
    			res_str += to_string(final[i]);
    		}
    	}

    	return res_str;
    }
};