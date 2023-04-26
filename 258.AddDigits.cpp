class Solution {
public:
    int addDigits(int num) {
        // Digital root
        return 1 + (num - 1 ) % 9;
    }
};
