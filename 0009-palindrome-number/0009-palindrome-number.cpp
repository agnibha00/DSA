class Solution {
public:
    bool isPalindrome(int x) {
        string u = to_string(x);
        int n = u.size();

        if (x == 0) {
            return true;
        } else if (x > 0) {
            int a = x;
            long long result = 0;
            for (int i = 0; i < n; i++) {
                int b = x % 10;
                result = result * 10 + b;
                x = x / 10;
            }
            if (a == result) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
};