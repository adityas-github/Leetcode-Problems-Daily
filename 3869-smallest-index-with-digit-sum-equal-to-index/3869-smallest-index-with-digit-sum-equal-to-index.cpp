class Solution {
    bool getSum(int n,int i){
        int t = n,sum=0;
        while(t){
            sum+=(t%10);
            t/=10;
        }
        if(sum==i){
            return true;
        }
        else{
            return false;
        }
    }
public:

    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(getSum(nums[i],i)){
                return i;
            }
        }
        return -1;
    }
};