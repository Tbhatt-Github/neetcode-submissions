class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for (auto w:strs){
            encoded += w;
            encoded += '/';
        }
        cout << encoded << endl;
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        for (int i=0; i<s.size(); i++){
            string temp = "";
            while (s[i] != '/'){
                temp += s[i];
                i++;
            }
            decoded.push_back(temp);
        }
        return decoded;
    }
};
