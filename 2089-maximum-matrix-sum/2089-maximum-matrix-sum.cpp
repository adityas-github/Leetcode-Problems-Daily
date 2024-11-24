class Solution {
public:
    #define ll long long
    long long maxMatrixSum(vector<vector<int>>& A) {
        ll ans = 0, n = A.size();
        
        ll minElement = INT_MAX;
        ll negCount = 0;
        
        for(auto& row: A) {
            for(auto& e: row) {
                ans += abs(e);
                minElement = min(minElement, (ll)abs(e));
                if(e < 0) negCount++;
            }
        }
        
        if(negCount % 2 == 0) return ans;
        
        ans -= 2*minElement;
        return ans;
    }
};