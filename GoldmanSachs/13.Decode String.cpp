class Solution{
public:
    inline bool isANum(char c) {
        return c >= '0' && c <= '9';
    }
    
    inline int getPositions(int a) {
        int count = 0;
        while (a > 0) {
            a = a / 10;
            ++count;
        }
        return count;
    }
    
    int decode(int index, const string s, string&final) {
        while (index < s.length()) {
            if (s[index] == '[') {
                ++index;
            } else if (isANum(s[index])) {
                int num = atoi(&s[index]);
                int pos = getPositions(num);
                int indexNext = 0;
                while(num--) {
                    indexNext = decode(index + pos, s, final);
                }
                index = indexNext;
            } else {
                final += s[index];
                ++index;
            }
            if (index < s.length() && s[index] == ']')
                return index + 1;
        }
        return s.length();
    }
    
    string decodedString(string s){
        string final = "";
        int num = 0;
        while (num < s.size())
            num = decode(num, s, final);
        return final;
    }
};