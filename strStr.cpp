class Solution {
public:
    int strStr(string haystack, string needle) {
        int len = (int) needle.size();
        for (int i = 0; i < (int) haystack.size(); i++){
            if (needle == haystack.substr(i, len)){
                return i;
            } 
        }
        return -1;
    }
};
