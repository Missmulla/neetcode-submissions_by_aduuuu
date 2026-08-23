class Solution {
public:
    int countOnes(int x) {
        int count = 0;

        while (x > 0) {
            count += (x & 1);
            x >>= 1;
        }

        return count;
    }

    vector<int> countBits(int n) {
        vector<int> ans(n + 1);

        for (int i = 0; i <= n; i++) {
            ans[i] = countOnes(i);
        }

        return ans;
    }
};