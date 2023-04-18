#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++){
            nums[i] = nums[i-1];
        }

        return nums;
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
