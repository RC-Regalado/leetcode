class Solution {
public:

    int reverse(int x)
    {
        unsigned result = 0;
        while (x > 0)
        {
            result *= 10;
            result += x % 10;
            x /= 10;
        }
        return result;
    }
    bool isPalindrome(int x) {
        return x >= 0 && reverse(x) == x;
    }
};
