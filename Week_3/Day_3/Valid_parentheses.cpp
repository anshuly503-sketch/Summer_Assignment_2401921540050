class Solution {
public:
    bool isValid(string s){
        bool changed =true;
        while(changed){
            changed =false;
            int pos;
            pos = s.find("()");
            if (pos != string::npos){
                s.erase(pos, 2);
                changed = true;
            }
            pos = s.find("{}");
            if (pos !=string::npos){
                s.erase(pos, 2);
                changed =true;
            }
            pos =s.find("[]");
            if(pos != string::npos){
                s.erase(pos, 2);
                changed = true;
            }
        }
        return s.empty();
    }
};
