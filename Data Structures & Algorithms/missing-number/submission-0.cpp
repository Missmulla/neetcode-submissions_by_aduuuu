class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        int expectedsum = n*(n+1)/2;

         int actualsum = std::accumulate(nums.begin(), nums.end(), 0);

         if(expectedsum == actualsum) return 0;

         else

            return expectedsum - actualsum;

        
    }
};
