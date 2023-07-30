#include <iostream>
#include <vector>

void print(const std::vector<std::vector<int> >& matrix) {
    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) 
            std::cout << matrix[i][j] <<'\t';
        std::cout <<'\n';
    }
}
using Matrix_t = std::vector<std::vector<int> >;
// std::vector<std::vector<int> > Transpose(const std::vector<std::vector<int> >& matrix) {}

Matrix_t Transpose(const Matrix_t& matrix) {
    const int rows = matrix[0].size();
    const int cols = matrix.size();
    std::vector<std::vector<int> > result (rows);
    for(int i = 0; i < rows; i++) {
        result[i].resize(cols); 
    }

    for(int i = 0; i < rows; i++) 
        for(int j = 0; j < cols; j++)
            result[i][j] = matrix[j][i];

    return result;
}

int main() {
    const std::vector<int>m1(1);
    std::vector<std::vector<int> > matrix(1, m1);
    int k = 9;

    for(int i = 0; i < matrix.size(); i++) 
        for(int j = 0; j < matrix[i].size(); j++) {
            matrix[i][j] = k;
            k++;
        }
    
    print(matrix);

    std::vector<std::vector<int> > matt = Transpose(matrix);
    print(matt);


    int mat[3][2] = {1, 2, 3, 4, 5, 6};
    int mat4[2][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) 
            std::cout << mat[i][j] << ' ';
        std::cout << '\n';
    }

    for(int i = 0; i < 2; i++) 
        for(int j = 0; j < 3; j++) 
            mat4[i][j] = mat[j][i];

    std::cout << "trans\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) 
            std::cout << mat4[i][j] << ' ';
        std::cout << '\n';
    }



    return 0;
}