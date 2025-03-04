class Solution {
public:
    bool checkPowersOfThree(int n) {
        int temp = n;
        while(temp){
           if(temp%3==2) return false;
           temp/=3;
        }
        return true;
    }
};