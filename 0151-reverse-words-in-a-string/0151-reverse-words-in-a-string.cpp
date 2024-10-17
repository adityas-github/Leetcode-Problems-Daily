class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        stack<string>st;
        string word;
        int count =0;
        while(ss>>word){
            st.push(word);
            count++;
        }
        string result = "";
        int i=0;
        while(!st.empty()){
            result+=st.top();
            st.pop();
            if(i<count-1){
             result+=' ';
            }
            i++;
        }
        return result;
    }

};