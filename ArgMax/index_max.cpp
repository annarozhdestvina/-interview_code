#include <iostream>
#include <vector>

std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int> >& matrix) {
    int l = matrix[0][0];
    size_t min_row = 0;
    size_t min_col = 0;

    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            if(l < matrix[i][j]) {
                l = matrix[i][j];
                min_row = i;
                min_col = j;
            }
        }
    }
    return std::make_pair(min_row, min_col);  

}

int main() {
    int n = 0;
    int m = 0;
    std::cin >> n;
    std::cin >> m;

    const int rows = n;
    const int cols = m;


    const std::vector<int> m1(m);
    std::vector<std::vector<int> > matrix(n, m1);

    int k = 1;

    for(int i = 0; i < matrix.size(); i++) 
        for(int j = 0; j < matrix[i].size(); j++) {
            matrix[i][j] = k;
            k++;
        }

    matrix[0][2] = 77;

    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }

    size_t min_row = 0;
    size_t min_col = 0;

   
    auto pair = MatrixArgMax(matrix);

    std::cout <<"min_row = " << pair.first <<'\n';
    std::cout <<"min_col = " << pair.second <<'\n';


    return 0;
}