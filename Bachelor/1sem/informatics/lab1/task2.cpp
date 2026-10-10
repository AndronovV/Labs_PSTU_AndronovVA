#include <iostream>

int main(){
    int n, m;
    n = 10;
    m = 5;

    int res1 = n+++m;
    int res2 = m-- >n;
    int res3 = n-- > m;

    std::cout << res1 << std::endl;
    std::cout << res2 << std::endl;
    std::cout << res3  << std::endl;
    return 0;
}