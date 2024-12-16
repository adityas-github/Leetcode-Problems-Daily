class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
       int n = nums.size();
        auto &a = nums;
        while (k--) {
            int i = min_element(a.begin(), a.end()) - a.begin();
            a[i] *= multiplier;
        }
        return a;
    }
};