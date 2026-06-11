class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()<=1){
            return false ;
        }
        sort(nums.begin(),nums.end());
        int i;
        i=0;
        while(i<=nums.size()-2){
            if(nums[i]==nums[i+1]){
                return true;
            }
            i++;
            
        }
        return false;
    }
};