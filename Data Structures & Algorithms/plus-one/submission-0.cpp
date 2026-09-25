class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size()-1;
        int sum = 0;

        for(n; n >= 0; n--){
        if(digits[n] != 9){
            digits[n] = digits[n] + 1;
            break;
        }
        else{
            digits[n] = sum;
        }
        }

        if(n < 0){
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};
