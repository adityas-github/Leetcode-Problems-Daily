class Solution {
    public int longestConsecutive(int[] nums) {
        if(nums.length==0){
            return 0;
        }
        Arrays.sort(nums);
        int maxi = 1,count=0;
        for(int i=0;i<nums.length-1;i++){
            if(nums[i]+1==nums[i+1]){
                count++;
                maxi = Math.max(maxi,count+1);
            }
            else if(nums[i]!=nums[i+1]){
                count = 0;
            }
        }
        return maxi;
    }
}