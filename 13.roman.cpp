#include <iostream>
#include <iterator>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unsigned ret = 0;

        map<char, int> nums;
        nums['I'] = 1;
        nums['V'] = 5;
        nums['X'] = 10;
        nums['L'] = 50;
        nums['C'] = 100;
        nums['D'] = 500;
        nums['M'] = 1000;

        for (int i = s.length()-1; i >= 0; i--){
            unsigned int tmp = nums[s.at(i)];

            cout << s[i] << ": " << tmp << endl;
            cout << ".- " << i << endl;
            ret += (ret >= (tmp * 5)) ? tmp * -1: tmp;
        }

        return ret;
   }
};


int main(int argc, char** argv){
    Solution s;

    cout << s.romanToInt(argv[1]) << endl;

    return 0;
}
