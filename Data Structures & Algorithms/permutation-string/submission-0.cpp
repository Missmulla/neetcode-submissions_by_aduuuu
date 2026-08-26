class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int left = 0;

        unordered_map<char, int> s1_freq;
        unordered_map<char, int> window_freq;

        for(auto x : s1){
            s1_freq[x]++;
        }
        
        for(int right = 0; right < s2.size(); ++right){
            window_freq[s2[right]]++;

            while(right - left + 1 > s1.size()){
                window_freq[s2[left]]--;
                if(window_freq[s2[left]] == 0){
                    window_freq.erase(s2[left]);
                }
                left++;
            }
            if(s1_freq == window_freq){
                return true;
            }
        }
        return false;
        
    }
};
