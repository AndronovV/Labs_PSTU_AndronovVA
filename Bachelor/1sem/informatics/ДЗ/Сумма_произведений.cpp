#include <iostream>
using namespace std;

int main()
{
    int n, s=0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int a = 1;
        for (int j = i; j <= i*2; ++j)
        {
            a *= j;
        }
        s += a;
    }
    cout << s << endl;
    return 0;
}