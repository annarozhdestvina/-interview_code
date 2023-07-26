#include <iostream>
#include <vector>
#include <set>

class Solution {
public:
    int SingleNumber(std::vector<int>& nums) {
        int a = 0;
        std::sort(nums.begin(), nums.end());
        if(nums.size() == 1)
            return nums[0];
        if(nums[nums.size() - 1] != nums[nums.size() - 2])
            return nums[nums.size() - 1];
        for(int i = 0; i < nums.size() - 2; i += 2) {
            // std::cout << "i = "<< i << '\n';
            if(nums[i] != nums[i + 1]) {
                // std::cout <<"nums[i] = " << nums[i] <<' ';
                a = nums[i];
                // std::cout << "a = " << a;
                return a;
                // break;
            }
        }
    
        return a;
    }
};

int main() {
    std::vector<int> nums = {4, 1, 2, 1, 2, 7, 7};

    std::cout << "size = " << nums.size() << '\n'; // 5
    Solution ass;
    std::cout << "number = ";
    std::cout << ass.SingleNumber(nums);

    std::cout <<'\n';
    for(auto i : nums)
        std::cout << i << ' ';

std::cout << '\n';
     for(int i = 0; i < nums.size() - 1; i += 2) {
        

        std::cout << "i = "<< i << ' ';
            // if(nums[i] != nums[i - 1]) {
        std::cout <<"nums[i] = " << nums[i] <<' ';
        std::cout <<'\n';
                // a = nums[i];
                // std::cout << "a = " << a;
                // return a;
                // break;
            }
     

    // if(nums.size() == 1)
    //     std::cout << nums[0];

    // for(int i = 1; i < nums.size() - 1; i++) {
    //     int j = nums[0];
    //     if(j == nums[i]) {

    //     }
    // }
}