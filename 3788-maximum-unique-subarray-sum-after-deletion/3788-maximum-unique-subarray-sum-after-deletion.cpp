class Solution {
public:
    int maxSum(vector<int>& nums) {
        map<int,int>m;
        int maxi = nums[0];
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            maxi = max(maxi,nums[i]);
        }
        if(maxi<0)
        {
            return maxi;
        }
        else{
            int ans = 0;
            for(auto i:m){
                if(i.first>0){
                    ans+=i.first;
                }
            }
            return ans;
        }
    }
};