class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        unordered_map<int, int> m;

        for(int i = 0; i < numbers.size(); ++i){
            int complement = target - numbers[i];

            if(m.find(complement) != m.end()){
                return{m[complement]+1, i+1};
            }
            m[numbers[i]] = i;
        }
    }
};
