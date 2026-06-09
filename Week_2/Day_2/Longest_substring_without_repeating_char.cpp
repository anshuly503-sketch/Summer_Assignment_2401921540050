class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int highLength = 0;
        int n =s.length();
        for (int i = 0; i <n;i++) {
            for (int j = i; j< n;j++) {
                unordered_set<char> chars;
                bool unique =true;
                for(int k =i;k<= j; k++){
                   if (chars.count(s[k])) {
                       unique =false;
                        break;
                    }
                    chars.insert(s[k]);
                }
                if (unique) {
                    highLength =max(highLength, j - i + 1);
                }
            }
        }
        return highLength;
    }
};
