#include <iostream>
#include <set>

int main() {
    std::set <int> set;
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        set.insert(x);
        // if(type == 1) {  // add
        //     set.insert(x);
        // } else if (type == 2) {   // check
        //     if(set.find(x) == set.end()) 
        //         std::cout << "NO\n";
        //     else 
        //         std::cout << "YES\n";
        // } else 
        //     set.erase(x);   // delete
    }
    for(auto now : set) {
        std::cout << now << ' '; 
    }

    std::cout <<'\n';
    for(auto now = set.begin(); now != set.end(); now++)
        std::cout << *now << ' ';
    std::cout <<'\n';

    std::multiset <int> setmulti;
    int m;
    std::cin >> m;
    for(int i = 0; i < m; i++) {
        int x;
        std::cin >> x;
        setmulti.insert(x);
    }
    std::cout <<'\n';

    for(auto n = setmulti.begin(); n != setmulti.end(); n++) 
        std::cout << *n << ' ';

}