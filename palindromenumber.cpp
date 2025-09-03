#include <string>
//#include <algorithm>
//using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string s_reverse = s;
        reverse(s_reverse.begin(), s_reverse.end());
        return s == s_reverse; 
    }
};
