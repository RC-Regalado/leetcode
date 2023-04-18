#include <iostream>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int s = 0;

        while (num > 0){
            if (num % 2) num -= 1;
            else num /= 2;

            cout << num << endl;
            s++;
        }
        return s;
    }
};

int main(){
    Solution s;

    cout << s.numberOfSteps(123) << endl;

    return 0;
}
