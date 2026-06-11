class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mpp;

        // Count frequencies
        for(auto it : nums){
            mpp[it]++;
        }

        // Store {frequency, number}
        vector<pair<int,int>> freq;

        for(auto it : mpp){
            freq.push_back({it.second, it.first});
        }

        // Sort in descending order of frequency
        sort(freq.begin(), freq.end(), greater<pair<int,int>>());

        // Pick top k elements
        vector<int> ans;

        for(int i = 0; i < k; i++){
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};