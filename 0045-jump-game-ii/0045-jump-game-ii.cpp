class Solution {
public:
    int jump(vector<int>& A) {
        int jumps = 0, curEnd = 0, curFarthest = 0;
        for (int i = 0; i < A.size() - 1; i++) {
            curFarthest = max(curFarthest, i + A[i]);
            if (i == curEnd) {
                jumps++;
                curEnd = curFarthest;
            }
        }
        return jumps;
    }
};