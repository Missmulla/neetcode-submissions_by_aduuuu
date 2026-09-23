class Solution {
public:
    bool isHappy(int n) {

        int sum;
        set<int> seen;

        while(n != 1){
        sum = 0;

        while(n > 0){
        int last = n % 10;
        sum += last * last;
        n /= 10;
        }
        if(seen.contains(sum))
        return false;
        else{
        seen.insert(sum);
        }
        n = sum;
    }
    return true;
    }
};
