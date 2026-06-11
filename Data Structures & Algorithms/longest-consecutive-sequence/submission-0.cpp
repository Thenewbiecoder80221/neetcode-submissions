class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int lcs=1;
        int cs=1;
        int cn=nums[0];
        if(nums.size()<1){
            return 0;
        }
        unordered_set<int>stt(nums.begin(),nums.end());
        for(auto it:stt){
            if(stt.find(it-1)!=stt.end()){
                continue;
            }
                cs=1;
                cn=it;
                while(stt.find(cn+1)!=stt.end()){
                    
                    cs++;
                    cn++;
                }
                lcs=max(lcs,cs);
            
                }
            return lcs;
        }
        
    };
