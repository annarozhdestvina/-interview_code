// def twotermswithsumx (nums, x) 
// for i in range(len (nums)) 
// for j in range(i + 1,
// Ten (nums)):
// if nums [i] + nums [j] == x: 
// return nums [il, nums[jl
// return 0, 0

#include <iostream>

void twotermswithsumx(const int *array, const int length, const int x) {
    bool a = true;
    for(int i = 0; i< length; i++) {
        for(int j = i + 1; j < length; j++) {
            if((array[i] + array[j]) == x) {
                std::cout << "first= "<< array[i] << " sec= " << array[j] <<'\n';
                a = false;
            } 
        }
    }
    if(a)
        std::cout << "0, 0";
}

int main() {
    const int x = 5;
    const int array[] = {1, 8, 0, 6, 3};
    const int length = sizeof(array) / sizeof(array[0]);

    twotermswithsumx(array, length, x);
}

