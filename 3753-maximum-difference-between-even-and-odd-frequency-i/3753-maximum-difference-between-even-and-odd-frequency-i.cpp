class Solution {
public:
    int maxDifference(string s) {
         map<char,int>m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        int e=INT_MAX,o=INT_MIN;
        for(auto i:m){
            if(i.second%2==0){
                e=min(e,i.second);
            }
            else{
                o=max(o,i.second);
            }
        }
        return o-e;
    }
};