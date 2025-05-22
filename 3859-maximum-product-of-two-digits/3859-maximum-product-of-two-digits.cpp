class Solution {
public:
    int maxProduct(int n) {
       vector<int>t;
       int te = n;
       while(te){
        t.push_back(te%10);
        te/=10;
       } 
       sort(t.rbegin(),t.rend());
       return t[0]*t[1];
    }
};