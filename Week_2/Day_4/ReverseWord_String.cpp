class Solution {
public:
    string reverseWords(string s){
        string ans = "";
        int n= s.length();
        int i =0;
        while (i< n) {
            string word = "";
            while (i< n && s[i]!= ' '){
                word +=s[i];
                i++;
            }
            string rev = "";
            for (int j =word.length() -1;j>= 0; j--) {
                rev +=word[j];
            }
            ans += rev;
            if (i <n && s[i] == ' ') {
                ans +=' ';
                i++;
            }
        }
        return ans;
    }
};
