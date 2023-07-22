#include <iostream>
#include <set>
// 1 1 1 1
// 1 2
// 1 2


// 0 1 2 3 4 5 6 
// 1 1 1 2 2 2 3

// 1 2 3
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int new_i = 0;

        for(int i = 0; i < static_cast<int>(nums.size() - 1); i++) {
            if(nums[i] != nums[i+1])  {
                nums[new_i] = nums[i];
                new_i++;
            }
        }
        nums[new_i] = nums[nums.size() - 1];
        new_i++;
        // std::set<int> Myset (nums.begin(), nums.end());
        // nums.assign(Myset.begin(), Myset.end());
        std::cout << "k = " << new_i <<'\n';

        for(int i = 0; i < new_i; i++) {
            std::cout << nums[i] << ' ';
        }
        return new_i;
    }
};

int main() {
    Solution Ass;
    std::vector<int> numbers {0, 1, 1, 2, 3};
    Ass.removeDuplicates(numbers);




    return 0;
}