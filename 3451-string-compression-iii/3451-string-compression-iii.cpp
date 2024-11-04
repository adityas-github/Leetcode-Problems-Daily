class Solution {
public:
    string compressedString(string word) {
        int count = 1;
        string ans = "";
        char letter=word[0];
        for(int i=1;i<word.length();i++){
            if(word[i]!= word[i-1] || count==9){
                ans+=(count+'0');
                ans+=letter;
                letter = word[i];
                count=1;
            }
            else{
                count++;
            }
        }
        ans+=(count+'0');
        ans+=letter;
        return ans;
    }
};