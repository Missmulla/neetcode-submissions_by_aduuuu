class Solution {
public:
    bool isValid(string s) {

        stack<char> s1;

        for(auto x : s){
            if(x == '(' || x == '{' || x == '['){
                s1.push(x);
            }
            else{
                if(s1.empty()) return false;

                char front = s1.top();
                if((front == '(' && x == ')') || (front == '{' && x == '}') || (front == '[' && x == ']')){
                s1.pop();
                }
                else{
                    return false;
                }
            }
        }
        return s1.empty();

        
    }
};
