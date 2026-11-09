#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, ".65001");
    int a[100];
    int n, k;
    cin >> n;
    //Первая и вторая часть задания
    for (int i = 0; i < n; ++i)
    {
        a[i] = rand();
        cout << a[i] << " "; 
    }
    cout << endl;

    //Третья часть задания
    cin >> k;
    for (int i = k-1; i < n; ++i)
    {
        a[i] = a[i+1];
    }
    
    n -= 1;
    //Четвёртая и пятая часть задания
    n = n + n/2;
    for (int i = 0; i < n; ++i)
        if ((i+1)%3 == 0)
            {
                for (int j = n; j > i; --j)
                {
                    a[j] = a[j-1];
                }
                a[i] = 0;
            }
    
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " "; 
    }
    return 0;
}