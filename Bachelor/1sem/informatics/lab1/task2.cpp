#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int res1 = n+++m;
    int res2 = m-- >n;
    int res3 = n-- > m;

    cout << res1 << endl;
    cout << res2 << endl;
    cout << res3  << endl;
    return 0;
}