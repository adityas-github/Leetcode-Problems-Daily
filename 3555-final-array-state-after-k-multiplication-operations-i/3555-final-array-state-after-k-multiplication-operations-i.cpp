class Solution {
public:
int indexFind(vector<int>v){
    int mini = v[0];
    int indx = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]<mini){
            indx = i;
            mini = v[i];
        }
    }
    return indx;
}
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
       while(k--){
        int index = indexFind(nums);
        nums[index] = multiplier * nums[index]; 
       } 
       return nums;
    }
};