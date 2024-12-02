class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string str = " " + searchWord;
        if (sentence.substr(0, searchWord.length()) == searchWord)
            return 1;
        if (sentence.contains(str))
            return count(sentence.begin(),
                         sentence.begin() + sentence.find(str), ' ') +
                   2;
        return -1;
    }
};