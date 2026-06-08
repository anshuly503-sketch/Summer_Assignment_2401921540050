class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for (int i =0; i <ransomNote.length(); i++) {
            bool got = false;
            for (int j= 0; j <magazine.length();j++) {
                if (ransomNote[i]== magazine[j]) {
                    got = true;
                    magazine[j] = '@'; 
                    break;
                }
            }
            if(!got) {
                return false;
            }
        }
        return true;
    }
};
