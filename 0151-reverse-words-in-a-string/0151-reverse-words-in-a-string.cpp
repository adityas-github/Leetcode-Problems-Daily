class Solution {
public:
    string reverseWords(string s) {
        int l = 0;
        int r = s.size() -1;
        while (l <= r){
            if (s[l] == ' '){
                l++;
            }else if(s[r] == ' '){
                r--;
            }else{
                break;
            }
        }

        if (l > r){
            return "";
        }
        deque<string> list;
        string word;
        for(int i = l; i <= r; i++)
        {
            if (s[i] == ' ' && !word.empty()){
                list.push_front(word);
                word.clear();
            }else if (s[i] != ' '){
                word+=s[i];
            }
        }

        string output = word;
        for(int i = 0; i < list.size(); i++){
            output += ' ' + list[i];
        }

        return output;


        
    }
};