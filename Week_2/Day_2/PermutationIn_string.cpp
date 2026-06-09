class Solution {
public:
    bool checkInclusion(string s1,string s2) {
        int n =s1.length();
        int m =s2.length();
        if (n >m) return false;
        string new1= s1;
        sort(new1.begin(),new1.end());
        for (int i =0;i <=m - n;i++) {
            string temp =s2.substr(i, n);
            sort(temp.begin(),temp.end());
            if (temp ==new1) {
                return true;
            }
        }
        return false;
    }
};
