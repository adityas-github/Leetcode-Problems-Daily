class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
         unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++){
            int comp = target - arr[i];
            if(m.count(comp)){
                return {i,m[target-arr[i]]};
            }
            m[arr[i]] = i;
        }
        // return false;
        return {};
    }
};