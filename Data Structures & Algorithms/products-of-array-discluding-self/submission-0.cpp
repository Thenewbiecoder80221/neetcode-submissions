class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);
        int pre=1;
        int post=1;
        for(int i =0;i<nums.size();i++){
            result[i]=pre;
            pre=pre*nums[i];
        }
        for(int j=nums.size()-1;j>=0;j--){
            result[j]*=post;
            post=post*nums[j];
        }
    return result;
    }
};
