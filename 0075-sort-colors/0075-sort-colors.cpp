class Solution {
public:
    void sortColors(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        long long int count0 = 0, count1 = 0, count2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                count0++;
            } else if (nums[i] == 1) {
                count1++;
            } else {
                count2++;
            }
        }
        for (int i = 0; i < count0; i++) {
            nums[i] = 0;
        }
        for (int i = count0; i < count0 + count1; i++) {
            nums[i] = 1;
        }
        for (int i = count0 + count1; i < nums.size(); i++) {
            nums[i] = 2;
        }
    }
};