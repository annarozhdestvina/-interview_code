#include <iostream>
#include <vector>

class Solution {
    private:
        std::vector<int> m_solution;
        int m_counter;
public:
    int removeDuplicates(std::vector<int>& nums) {
        int k = 0;
        std::vector<int> solution1;
        int n = nums.size();
        solution1.reserve(n);
    for(int i =0; i < nums.size(); i++) {
        if(nums[i] != nums[i+1]) {
            k++;
            solution1.push_back(nums[i]);
        }
    }
    nums = std::move(solution1);
    m_solution = nums;
    m_counter = k;

    return k;
    }

    void Print() {
        std::cout << "my solution is: \n";
         for(auto const &element : m_solution)
        std::cout << element << ' ';
    std::cout <<'\n';
    std::cout << "k = " << m_counter;
    }
};

int main() {
    Solution Ass;
    std::vector<int> numbers {1, 1, 1, 2, 3};
    Ass.removeDuplicates(numbers);

    Ass.Print();

    std::vector<int> array;
    std::vector<int> array2;
    return 0;
}