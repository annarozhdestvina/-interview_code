#include <iostream>
#include <vector>

int main() {

    std::vector<int> nums {1, 2, 3};
    int k = 0;
    int current = 0;
    int length = nums.size();
    std::cout << "length = " << length << '\n';

    std::vector<int> new2;
    new2.reserve(length);
    std::cout << "length = "<<new2.size() <<'\n';
    std::cout << "cap = " << new2.capacity() << '\n';

    if(length > 2) {
        for(int i = 0; i < k; i++) {
        new2.push_back(nums[nums.size() - 1]);
        int p = nums[0];
        nums[0] = new2[i];
        for(int j = 1; j < nums.size() - 1; j++) {
            current = nums[j]; 
            nums[j] = p;
            p = current;
        }
        nums[nums.size() - 1] = current;
        }
    } else if(length > 1) {
        for(int i = 0; i < k; i++) {
            current = nums[0];
            nums[0] = nums[1];
            nums[1] = current;
        }
    }
     std::cout << "new2= \n";

    for(const auto &element : new2)
        std::cout << element << ' ';

    std::cout << "\nnums= \n";

    for(const auto &element : nums)
        std::cout << element << ' ';





    return 0;
}