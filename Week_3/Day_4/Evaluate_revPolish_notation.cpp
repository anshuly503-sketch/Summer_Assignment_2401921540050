class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        while(tokens.size() > 1){
            for (int i = 0; i <tokens.size();i++){
                if (tokens[i] == "+" || tokens[i] =="-" ||tokens[i] == "*" || tokens[i] =="/"){
                    int num1 =stoi(tokens[i - 2]);
                    int num2 =stoi(tokens[i - 1]);
                    int result = 0;
                    if(tokens[i] == "+")
                        result = num1 + num2;
                    else if (tokens[i] == "-")
                        result = num1 - num2;
                    else if (tokens[i] == "*")
                        result = num1 * num2;
                    else
                        result =num1 / num2;
                    tokens[i - 2] =to_string(result);
                    tokens.erase(tokens.begin() +(i - 1));
                    tokens.erase(tokens.begin() + (i - 1));
                    break;
                }
            }
        }

        return stoi(tokens[0]);
    }
};
