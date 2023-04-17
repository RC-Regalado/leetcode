#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result(nums.size());
        for (int i = 0; i < nums.size(); i++){
            result[i] = 0;
            for (int j = 0; j <= i; j++){
                result[i] += nums[j];
            }
        }

        return result;
    }
};

int main(){
    Solution s;
    vector<int> test = {1, 2, 3, 4};
    for (int i : s.runningSum(test)){
        cout << i << ",";
    }
    cout << endl;

    return 0;
}
