class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st,tt;
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
                if(st.empty()){
                    continue;
                }
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        for(int i=0;i<t.length();i++){
            if(t[i]=='#'){
                if(tt.empty()){
                   continue;
                }
                tt.pop();
            }
            else{
                tt.push(t[i]);
            }
        }
        if(st==tt){
            return true;
        }
        return false;
    }
};