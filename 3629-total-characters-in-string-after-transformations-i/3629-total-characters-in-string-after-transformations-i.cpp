class Solution {
private:
        int mod = 1000000007;
public:
    int lengthAfterTransformations(string s, int t) {
        int ans = 0;
        vector<int>c(26);
        for(char ch:s){
            ++c[ch-'a'];
        }
        for(int i=0;i<t;++i){
            vector<int>nx(26);
            nx[0]=c[25];
            nx[1]=(c[25]+c[0])%mod;
            for(int j=2;j<26;++j){
                nx[j] = c[j-1];
            }
            c=move(nx);
        }
        for(int i=0;i<26;i++){
            ans = (ans+c[i])%mod;
        }
        return ans;
    }
};