#include <iostream>
#include <map>
#include <string>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> chars;
        for(char c : magazine){
            chars[c]++;
        }

        for (char c: ransomNote){
            chars[c]--;
            if (chars[c] < 0) return false;
        }
        return true;
    }
};

int main(){
    Solution s;

    cout << s.canConstruct("a", "b") << endl;
    cout << s.canConstruct("aa", "ab") << endl;
    cout << s.canConstruct("aa", "aab") << endl;
    return 0;
}
