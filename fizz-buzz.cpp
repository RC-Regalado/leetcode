#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res(n);

        for (int i = 1; i <= n; i++){
            if (!(i % 3) && !(i % 5)) res[i-1] = "FizzBuzz";
            else if (!(i % 3)) res[i-1] = "Fizz";
            else if (!(i % 5)) res[i-1] = "Buzz";
            else res[i-1] = to_string(i);
        }
        return res;
    }
};

int main(){
    Solution s;

    for (auto & str : s.fizzBuzz(15))
        cout << str;
    cout << endl;
    return 0;
}
