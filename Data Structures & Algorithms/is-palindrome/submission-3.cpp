class Solution {
public:
    bool isPalindrome(string s) {
        string s2 = "";
        for (auto c:s){
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
                s2 += tolower(c);
            }
            if (c >= '0' && c <= '9'){
                s2 += c;
            }
        }

        cout << s2 << endl;

        int left = 0;
        int right = s2.size()-1;
        while(left < right){
            if (s2[left] != s2[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
