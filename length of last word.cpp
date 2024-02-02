class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter = 0;
        bool flag = false;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ' ' && flag)
                break;
            else if (s[i] != ' ') {
                counter++;
                flag = true;
            }
        }
        return counter;
    }
};