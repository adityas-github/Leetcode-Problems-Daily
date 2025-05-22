class Solution {
public:
    int maxFreqSum(string s) {
        map<char, int> v, c;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                v[s[i]]++;
            } else {
                c[s[i]]++;
            }
        }
        int m1 = 0, m2 = 0;

        for (auto i : v) {
            m1 = max(m1, i.second);
        }
        for (auto i : c) {
            m2 = max(m2, i.second);
        }
        return m1 + m2;
    }
};