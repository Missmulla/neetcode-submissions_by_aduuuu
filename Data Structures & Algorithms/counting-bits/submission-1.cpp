#include <bit>
class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> output(n+1);
        int count = 0;

        for(int i = 0; i <=n; ++i){
            output[i] = __builtin_popcount(i);
        }
        return output;
    }
};
