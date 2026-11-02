#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, ".65001");
    int a, b;
    bool f;
    cin >> a;
    if (a!=0)
    {
        cin >> b;
        f = b > a;
        while(b!=0&&f)
        {
            f = f&&(b>a);
            if (f)
            {
                a = b;
                cin >> b;
            }
        }
        if (f)
            cout << "Последовательность упорядочена" << endl;
        else
            cout << "Последовательность неупорядочена" << endl;
    }
    else
        cout << "Нет элементов" << endl;
}