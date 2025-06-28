class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<int, vector<int>,
                    greater<int>>q;
       for(int i=0;i<k;i++){
        q.push(nums[i]);
       } 
       for(int i=k;i<nums.size();i++){
        if(q.top()<nums[i]){
            q.pop();
            q.push(nums[i]);
        }
       }
       unordered_map<int,int>m;
        while(!q.empty()){
            m[q.top()]++;
            q.pop();
        }
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]){
                v.push_back(nums[i]);
                m[nums[i]]--;
            }
        }
        return v;
    }
};