class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.length() - 1, j = t.length() - 1;
        int count = 0;
        while (i >= 0 || j >= 0) {
            int skipS = 0;
            while (i >= 0) {
                if (s[i] == '#') {
                    skipS++;
                    i--;
                } else if (skipS > 0) {
                    skipS--;
                    i--;
                } else {
                    break; // s[i] is valid
                }
            }

            int skipT = 0;
            while (j >= 0) {
                if (t[j] == '#') {
                    skipT++;
                    j--;
                } else if (skipT > 0) {
                    skipT--;
                    j--;
                } else {
                    break; // t[j] is valid
                }
            }
            if (i >= 0 && j >= 0) {
                if (s[i] != t[j])
                    return false;
            } else {
                // if only one string is exhausted, the other is not
                if (i >= 0 || j >= 0)
                    return false;
            }

            i--;
            j--;
        }
        return true;
    }
};