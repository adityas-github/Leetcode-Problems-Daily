class Solution {
public:
      int cnt[26];
    int minDeletion(string s, int k) {
        for(auto &c:s)cnt[c-'a']++;
    
        sort(cnt,cnt+26,greater<int>());
        
        int ans=0;
        for(int a=0;a<26;a++){
            if(a>=k)ans+=cnt[a];
        }

        return ans;
    }
};