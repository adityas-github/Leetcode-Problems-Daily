class Solution {
public:
    int reverse(int n){
        long long int temp = 0;
        while(n){
            temp*=10;
            temp+=n%10;
            n/=10;
        }
        return temp;
    }
    bool isPalindrome(int x) {
        int temp = x;
        if(x<0){
            return false;
        }
        else{
            int re = reverse(x);
            if(x==re){
                return true;
            }
            else{
                return false;
            }
        }
    }
};