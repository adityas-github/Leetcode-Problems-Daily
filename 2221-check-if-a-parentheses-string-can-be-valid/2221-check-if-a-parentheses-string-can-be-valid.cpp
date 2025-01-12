class Solution {
public:
    bool canBeValid(string s, string locked) {
         int n = s.length(), i, l = 0, u = 0;
        if(n & 1)   return false;
        for(i = 0; i < n; i++)  if(locked[i] == '0')    u++;
        else if(s[i] == '(')    ++l;
        else if(l)  --l;
        else if(u)  --u;
        else    return false;
        l = u = 0;
        for(i = n - 1; i >= 0; --i) if(locked[i] == '0')    u++;
        else if(s[i] == ')')    ++l;
        else if(l)  --l;
        else if(u)  --u;
        else    return false;
        return true;
    }
};