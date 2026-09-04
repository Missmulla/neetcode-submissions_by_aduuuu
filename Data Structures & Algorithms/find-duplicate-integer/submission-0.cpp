class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        unordered_map<int, int> freq;

        for(auto x : nums){
            freq[x]++;

            if(freq[x] > 1) return x;
        }
        
    }
};
