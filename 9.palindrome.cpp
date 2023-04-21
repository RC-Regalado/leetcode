class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int rev = 0;
        int temp = x;

        while (temp > 0){
            int d = temp % 10;
            rev = rev * 10 + d;
            temp /= 10;
        }

        return x == rev;
    }
};
