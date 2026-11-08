#include <iostream>
#include <clocale>
#include <cstdarg>
using namespace std;

int sum(int n, ...)
{
    int s = 0;
    va_list args;
    va_start(args, n);
    for (int i = 0; i < n; ++i)
    {
        int d = va_arg(args, int);
        s += d;
        cout << d << ' ';
    }
    va_end(args);
    return s;
}

int main()
{
    setlocale(LC_ALL, ".65001");
    cout << "Cумма 3 параметров: ";
    int s1 = sum(3, rand()%51, rand()%51, rand()%51);
    cout << "= " << s1 << endl;
    cout << "Cумма 7 параметров: ";
    int s2 = sum(7, rand()%51, rand()%51, rand()%51, rand()%51, rand()%51, rand()%51, rand()%51);
    cout << "= " << s2 << endl;
    cout << "Cумма 11 параметров: ";
    int s3 = sum(11, rand()%51, rand()%51, rand()%51, rand()%51, rand()%51, rand()%51, rand()%51, rand()%51, rand()%51, rand()%51, rand()%51);
    cout << "= " << s3 << endl;
}