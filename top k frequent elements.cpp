class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int fre[20000] = { 0 };
        for (int i = 0; i < nums.size(); i++) {
            fre[nums[i] + 10000]++;
        }
        vector<int> v;
        while (k--) {
            int max = -1, idx;
            for (int i = 0; i < 20000; i++) {
                if (fre[i] > max) {
                    max = fre[i];
                    idx = i;
                }
            }
            v.push_back(idx - 10000);
            fre[idx] = 0;
        }
        return v;
    }
};