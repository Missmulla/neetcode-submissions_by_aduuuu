class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> m;
        vector<int> res;

        for(auto x : nums){
            m[x]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > minheap;

        for(auto &x : m){
            int num = x.first;
            int count = x.second;
            minheap.push({count, num});

            if(minheap.size() > k){
                minheap.pop();
            }
        }

        while(!minheap.empty()){
            res.push_back(minheap.top().second);
            minheap.pop();
        }
        return res;
        
    }
};
