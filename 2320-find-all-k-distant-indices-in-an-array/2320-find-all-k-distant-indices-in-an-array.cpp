class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int>s;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key){
                s.insert(i);
            }
        }
        vector<int>v;
        for(auto i:s){
            int index = i,t=i;
            while(t>=0 && abs(t-i)<=k){
               v.push_back(t);
                t--;
            }
            t=i;
            while(t<n && abs(t-i)<=k){
                v.push_back(t);
                t++;
            }
        }
        for(auto i:v){
            s.insert(i);
        }
        vector<int>ans;
        for(auto i:s){
            ans.push_back(i);
        }
        return ans;
    }
};