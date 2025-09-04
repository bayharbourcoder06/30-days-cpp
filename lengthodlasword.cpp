class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++){
            if (s[i] != ' '){
                int j = i;
                while (j < s.size() && s[j] != ' '){
                    count++;
                    j++;
                }
                break;
            }
        }
        return count;
    }
};
