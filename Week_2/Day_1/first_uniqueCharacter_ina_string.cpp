class Solution {
public:
    int firstUniqChar(string s) {
        for(int i =0; i < s.length(); i++) 
        {
            bool ans = true;
            for (int j= 0; j< s.length();j++) {
                if (i !=j && s[i]== s[j]) {
                    ans= false;
                    break;}
            }
            if (ans) {
                return i;
            }
        }
        return -1;
    }
};
