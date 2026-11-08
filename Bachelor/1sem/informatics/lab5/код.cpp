#include <iostream>
#include <clocale>
using namespace std;

void printer(int n, char s[][60])
{

    for (int i = 0; i < n; ++i)
    {
        cout << '(';
        for (int j = 0; *(*(s+i)+j+1) != '\0'; ++j)
        {
            if (*(*(s+i)+j) == '0')
                cout << ',';
            else
                cout << *(*(s+i)+j);
        }
        cout << ')';
    }
}

int main()
{
    setlocale(LC_ALL, ".65001");
    int n;
    char s[100][60];
    cout << "Введите количество строк: "; cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << "Введите строку: "; cin >> s[i];
    }
    printer(n, s);
    return 0;
}