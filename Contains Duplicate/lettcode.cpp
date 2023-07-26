#include <iostream>
#include <vector>
#include <set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::sort(nums.begin(),nums.end()); 
        for(int i = 1; i < nums.size() - 1; i++) {
            if(nums[i] == nums[i - 1]) {
                return true;
                break;
            }
        }
        return false;
    }
};

int main() {
    Solution ass;
    std::vector<int> nums {1, 2, 3, 7, 9, 1};

    bool a = ass.containsDuplicate(nums);
    if(a)
        std::cout << "true";
        else
        std::cout << "false";

    return 0;  
}
