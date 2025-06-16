class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = 0,curr=INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[j]-nums[i])>curr){
                    curr=max(curr,nums[j]-nums[i]);
                }
            }
            ans = max(curr,ans);
        }
        if(ans==0){
            return -1;
        }
        return ans;
    }
};