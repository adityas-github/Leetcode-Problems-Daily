class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i =0;
        int j =0;
        char c = name[0];

        while(i<name.size() && j<typed.size()){
            int count=0;
            while(name[i]==c){
                count++;
                i++;
            }
            while(typed[j]==c){
                count--;
                j++;
            }

            if(name[i]!=typed[j] || count>0)return false;
            c = name[i];

        }

        return true;

    }
};