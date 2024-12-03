class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = s.length();
        int m = spaces.size();
        string result = "";
        int lastIndex = 0;

        // Insert spaces at the specified positions
        for (int i = 0; i < m; ++i) {
            int spaceIndex = spaces[i];

            // Append the part of the string before the space position
            result += s.substr(lastIndex, spaceIndex - lastIndex);
            result += " "; // Add space
            lastIndex = spaceIndex;
        }

        // Append the remainder of the string after the last space
        result += s.substr(lastIndex);

        return result;
    }
};
