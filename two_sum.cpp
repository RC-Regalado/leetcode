#include <iostream>
#include <vector>
#include <unordered_map
using namespace std;

static auto __ = []()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;
        unordered_map<size_t,int> key;

        unordered_map<size_t,int>::iterator it;

        for(int i = 0 ; i < nums.size() ; i++){
            it = key.find(target - nums[i]);
            if(it != key.end()){
                ans.push_back(key[target - nums[i]]);
                ans.push_back(i);
                break;
            }
            key[nums[i]] = i;
        }

        return ans;
    }
};
