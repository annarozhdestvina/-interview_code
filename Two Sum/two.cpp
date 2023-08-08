#include <iostream>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> result;
        bool a = false;
        result.reserve(2);
        std::sort(nums.begin(), nums.end());
        for (int index = 0; index < nums.size() - 1; index++) {
            for(int j = index; j < nums.size() - 1; j++) {
                if((nums[index] + nums[j]) == target) {
                    result[0] = index;
                    result[1] = j;
                    std::cout << "[" << result[0] << ", " << result[1] << "]" << '\n';
                    a = true;
                    break;
                }
            }
            if(a)
                break;
        }

        return result;
    }

    void Print(std::vector<int>& nums) {
        for(auto &n : nums) 
            std::cout << n << ' ';
        std::cout << '\n';
    }

    void test_case(std::vector<int>& nums, int number_of_test, int target, int *success) {
    printf("Number of test #%d\n", number_of_test);
    
        Print(nums);
        printf("target = %d\n", target);
        Solution ass;
        ass.twoSum(nums, target);
        *success +=1;
        printf("Test: OK\n");
   
        // printf("FAILED\n");
        // printf ("expected = %d\nactual = %d\n", expected, actual);
        // print_array(array, length);
    
        printf("\n\n");
    }


    void get_product_test () {
        int number_of_test = 1;
        int success = 0;
        {
            std::vector<int> nums = {4, 1, 2, 1, 2, 7, 7};
            int target = 8;
            test_case(nums, number_of_test, target, &success);
        }

        number_of_test++;
        {
            std::vector<int> nums = {2,7,11,15};
            int target = 9;
            test_case(nums, number_of_test, target, &success);
        }

        number_of_test++;
        {
            std::vector<int> nums = {4, 1, 2, 1, 2, 7, 7};
            int target = 8;
            // Solution ass;
            // ass.twoSum(nums, target);
            // const int actual = get_product(array, length);
            test_case(nums, number_of_test, target, &success);
        }

        number_of_test++;
        {
            std::vector<int> nums = {3,2,4};
            int target = 6;
            test_case(nums, number_of_test, target, &success);
        }

        number_of_test++;
        {
            std::vector<int> nums = {3, 3};
            int target = 6;
            test_case(nums, number_of_test, target, &success);
        }

        number_of_test++;
        {
            std::vector<int> nums = {4, 1, 2, 6, 2, 7, 3};
            int target = 8;
            test_case(nums, number_of_test, target, &success);
        }
    }
};


int main() {

    // int n = 8;
    // std::vector<int> nums = {4, 1, 2, 1, 2, 7, 7};

    // std::cout << "size = " << nums.size() << '\n'; // 5

    Solution ass;
    ass.get_product_test();
    // ass.twoSum(nums, n);

    // for(auto&el : nums) {
    //     // if(el + nums[i] == )
    //     std::cout << el + 1<< ' ';
    // }


    


    return 0;
}