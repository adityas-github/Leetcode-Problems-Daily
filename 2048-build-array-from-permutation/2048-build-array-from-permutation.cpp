class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
       vector<int>m(nums.size());
       for(int i=0;i<nums.size();i++){
        m[i] = nums[nums[i]];
       } 
       return m;
    }
};