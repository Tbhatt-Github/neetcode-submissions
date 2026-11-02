class Solution {
public:

    void recurse(int openN, int closedN, int n, vector<string>& ans, string& stk){
        if (openN == closedN && openN == n){
            ans.push_back(stk);
            return;
        }

        if (openN < n){
            stk+= "(";
            recurse(openN+1, closedN, n, ans, stk);
            stk.pop_back();
        }

        if (closedN < openN){
            stk += ")";
            recurse(openN, closedN+1, n, ans, stk);
            stk.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string stk = "";
        recurse(0, 0, n, ans, stk);
        return ans;
    }
};
