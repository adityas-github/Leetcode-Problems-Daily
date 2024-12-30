class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int pre=1;
       int n=nums.size();
       vector<int>res(n,1);
       int j=0;
       for(auto i:nums){
           res[j] = pre;
           j++;
           pre*=i;
       }
       pre=1;
       for(auto k=nums.rbegin();k!=nums.rend();k++){
           j--;
           res[j] *= pre;
           pre*=(*k);
       }
       return res;
    }
};