class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int, int> freq;

        for(auto x : nums){
            freq[x]++;
        }

        int maxfreq = 0;
        int ans = 0;

        for(auto it : freq){
            if(it.second > maxfreq){
                maxfreq = it.second;
                ans = it.first;
            }
        }
        return ans;
        
    }
};