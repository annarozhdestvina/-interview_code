//          find k = 9   massiv n*m
//
//      1   4   7   11  15          
//      2   5   8   12  19
//      3   6   9   16  22
//      10  13  14  17  24
//      18  21  23  26  30

// return true if exists
#include <iostream>

class Solution {
public:
    bool searchMtrix(std::vector<std::vector<int> >& massiv, int k) {
        if(massiv.size() == 0 || massiv[0].size() == 0)
            return false;
        
        int m = massiv.size();
    const int n = massiv[0].size();
    int i = 0;
    int j = n - 1;

    while(i < m && j >= 0) {
        if (massiv[i][j] == k)
            return true;
        if (massiv[i][j] > k)
            j--;
        else
            i++;
    }
    return false;
    }


    void Print(const std::vector<std::vector<int> >& matrix) {
        std::cout << "Print\n";
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[i].size(); j++) 
                std::cout << matrix[i][j] <<'\t';
            std::cout <<'\n';
        }
    }

    void Fill(const std::vector<std::vector<int> >& matrix) {
        // int matrix[5][5] = {1, 4, 7, 11, 15, 2, 5, 8, 12, 19, 3, 6, 9, 16, 22, 10, 13, 14, 17, 24, 18, 21, 23, 26, 30};
    }

    void get_product_test () {
        int number_of_test = 1;
        int success = 0;
        {
            std::vector<int> nums = {4, 1, 2, 1, 2, 7, 7};
            int target = 8;
            // test_case(nums, number_of_test, target, &success);
        }
    }
};

int main() {
    // const int massiv[5][5] = {1, 4, 7, 11, 15, 2, 5, 8, 12, 19, 3, 6, 9, 16, 22, 10, 13, 14, 17, 24, 18, 21, 23, 26, 30};
    const int k = 9;
    bool result = false;

    const std::vector<int>m1(5);
    std::vector<std::vector<int> > matrix(5, m1);
    matrix[0][0] = 1;   //, 4, 7, 11, 15, 2, 5, 8, 12, 19, 3, 6, 9, 16, 22, 10, 13, 14, 17, 24, 18, 21, 23, 26, 30};
    matrix[0][1] = 4;   
    matrix[0][2] = 7; 
    matrix[0][3] = 11;
    matrix[0][4] = 15;
    matrix[1][0] = 2;
    matrix[1][1] = 5;
    matrix[1][2] = 8;
    matrix[1][3] = 12;
    matrix[1][4] = 19;
    matrix[2][0] = 3;
    matrix[2][1] = 6;
    matrix[2][2] = 9;
    matrix[2][3] = 16;
    matrix[2][4] = 22;  //10, 13, 14, 17, 24, 18, 21, 23, 26, 30
    matrix[3][0] = 10;
    matrix[3][1] = 13;
    matrix[3][2] = 14;
    matrix[3][3] = 17;
    matrix[3][4] = 24;
    matrix[4][0] = 18;
    matrix[4][1] = 21;
    matrix[4][2] = 23;
    matrix[4][3] = 26;
    matrix[4][4] = 30;


    Solution ass;
    // ass.Fill(matrix);
    ass.Print(matrix);
    std::cout <<"Right result: ";
    std::cout << std::boolalpha << ass.searchMtrix(matrix, 9);





    // for(int i = 0; i < 5; i++) {
    //     for (int j = 0; j < 5; j++)
    //         std::cout << massiv[i][j] << '\t';
    //     std::cout <<'\n';
    // }

    // if(massiv)
    //     result = false;

    // int m = sizeof(massiv) / sizeof(massiv[0]);
    // const int n = massiv[0][0];
    // int i = 0;
    // int j = n - 1;

    // while(i < m && j >= 0) {
    //     if (massiv[i][j] == k)
    //         result = true;
    //     if (massiv[i][j] > k)
    //         j--;
    //     else
    //         i++;
    // }


    // std::cout << std::boolalpha << result;


    return 0;
}