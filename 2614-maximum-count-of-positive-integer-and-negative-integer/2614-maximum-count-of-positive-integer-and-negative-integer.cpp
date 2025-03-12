class Solution {
public:
    int maximumCount(vector<int>& nums) {
       int lC=0,rC=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            lC++;
        }
        else if(nums[i]>0){
            rC++;
        }
       }
       return max(lC,rC); 
    }
};