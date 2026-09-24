class Solution {
public:
    bool isHappy(int n) {

        int sum;
        set<int> seen;

        while(n != 1){
        sum = 0;

        if(seen.contains(n)){
            return false;
        }
        seen.insert(n);

        while(n > 0){
        int last = n % 10;
        sum += last * last;
        n /= 10;
        }

        n = sum;
    }
    return true;
    }
};
