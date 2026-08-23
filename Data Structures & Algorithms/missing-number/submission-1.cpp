class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        int expectedsum = n*(n+1)/2;

         int actualsum = std::accumulate(nums.begin(), nums.end(), 0);

         

         return expectedsum - actualsum;

        
    }
};
