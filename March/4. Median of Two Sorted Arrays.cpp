class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int flag = (nums1.size() + nums2.size()) % 2 == 0 ? 1 : 0;
        size_t sort_num = (nums1.size() + nums2.size()) / 2 + 1;
        vector<double> res;
        size_t idx1=0, idx2=0;
        while(res.size() < sort_num){
            if(idx1 < nums1.size() && (idx2 >= nums2.size()||nums1[idx1] < nums2[idx2])){
                res.push_back(nums1[idx1]);
                idx1++;
            }
            else{
                res.push_back(nums2[idx2]);
                idx2++;
            }
        }
        if(flag==1){
            return (res[sort_num-2] + res[sort_num-1])/2;
            
        }else{
           return res[sort_num-1]; 
        }
    }
};