class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = {};
        for(char c : s) result ^= c;
        for(char c : t) result ^=c;
        return result;
    }
};