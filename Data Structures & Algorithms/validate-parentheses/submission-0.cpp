class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        map<char, char> m{{'(', ')'}, {'{', '}'}, {'[', ']'}};
        for (auto c:s){
            if (m.count(c)){
                stk.push(c);
                continue;
            }
            else{
                if (stk.empty()){
                    return false;
                }
            }
            char prev = stk.top();
            if (m[prev] == c){
                stk.pop();
            }
            else{
                return false;
            }
        }
        return stk.empty();
    }
};
