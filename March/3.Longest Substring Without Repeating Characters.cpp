class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int max_len = 0;
		string res;
		size_t pos;
		for (size_t i = 0; i<s.size(); i++){
			pos = res.find(s[i]);
			if (pos == res.npos){
				res = res + s[i];
				if (res.size()>max_len){
					max_len = res.size();
				}
			}
			else{
				res = i - pos > 1 ? res.substr(pos + 1, res.size()) + s[i] : res = s[i];
			}
		}
		return max_len;
	}
};