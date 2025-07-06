class FindSumPairs {
private:
    unordered_map<int, int> m;
    vector<int> nums1, nums2;

public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1 = nums1;
        this->nums2 = nums2;
        for (auto i : nums2) {
            m[i]++;
        }
    }

    void add(int index, int val) {
        --m[nums2[index]];
        nums2[index] += val;
        m[nums2[index]]++;
    }

    int count(int tot) {
        int a = 0;
        for (int i : nums1) {
            int r = tot - i;
            if (m.count(r)) {
                a += m[r];
            }
        }
        return a;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */