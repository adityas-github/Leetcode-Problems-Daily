class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int l = pref.length();
        int count = 0;
        for(auto i:words){
            if(i.length()<pref.length()){
                continue;
            }
            else{
                string m = i.substr(0,pref.length());
                if(m==pref){
                    count++;
                }
            }
        }
        return count;
    }
};