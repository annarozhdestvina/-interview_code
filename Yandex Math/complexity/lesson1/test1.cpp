#include <iostream>

int main() {
    std::string myString;
    std:: cin >> myString;

    char anc = ' ';
    int counter = 0;

    for(int i = 0; i < myString.length() - 1; i++) {
        int nowcnt = 0;
        for (int j =0; j < myString.length() - 1; j++) {
            if(myString[i] == myString[j])
                nowcnt++;
            if(nowcnt > counter) {
                anc = myString[i];
                counter = nowcnt;
            }
        }
    }
    std::cout << anc <<'\n';

    return 0;
}