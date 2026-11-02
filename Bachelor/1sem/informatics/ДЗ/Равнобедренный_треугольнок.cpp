#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    for (int i = 0; i < (n+1)/2; ++i)
    {
        for (int p = 0; p < n/2 - i; ++p)
        {
            cout << ' ';
        }
        for (int s = 0; s < i * 2 + 1; ++s)
        {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}