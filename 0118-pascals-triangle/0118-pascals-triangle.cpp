class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.push_back({1});
        for(int i=1;i<numRows;i++){
           vector<int>t;
           vector<int>prev = ans[i-1];
           t.push_back(1);
           for(int j=1;j<i;j++){
            t.push_back(prev[j-1]+prev[j]);
           } 
           t.push_back(1);
           ans.push_back(t);
        }
        return ans;
    }
};