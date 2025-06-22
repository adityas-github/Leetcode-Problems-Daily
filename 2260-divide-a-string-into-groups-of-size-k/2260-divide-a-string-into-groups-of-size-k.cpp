class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        string d = "";
        for(int i=0;i<s.length();i++){
            if((i+1)%k==0){
                d+=s[i];
                ans.push_back(d);
                d="";
            }
            else{
                d+=s[i];
            }
        }
        if(s.length()%k==0){
            return ans;
        }
        if(d.length()!=0){
            while(d.length()%k!=0){
                d+=fill;
            }
        }
        ans.push_back(d);
        return ans;
    }

};