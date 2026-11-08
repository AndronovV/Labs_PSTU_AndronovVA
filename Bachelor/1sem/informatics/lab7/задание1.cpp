#include <iostream>
#include <complex>
#include <clocale>
using namespace std;

int d_sum(int n, int *a)
{
    int s = 0;
    for (int i = 0; i < n; ++i)
    {
        s += a[i];
    }
    return s;
}

complex<double> d_sum(int n, complex<double> *a)
{
    complex<double> s;
    for (int i = 0; i < n; ++i)
    {
        s += a[i];
    }
    return s;
}

int main()
{
    setlocale(LC_ALL, ".65001");
    int f, n;
    cout << "Сумму каких чисел нужно найти (1 - целых, 2 - комплексных)? "; cin >> f;
    if (f == 1)
    {
        cout <<"Сколько чисел нужно сложить? "; cin >> n;
        int a[100];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        cout << d_sum(n, a);
    }
    else if (f == 2)
    {
        cout <<"Сколько чисел нужно сложить? "; cin >> n;
        complex<double> a[100];
        for (int i = 0; i < n; ++i)
        {
            double real, im;
            cin >> real >> im;
            a[i] = {real, im};
        }
        complex<double> res = d_sum(n, a);
        cout << res.real() << '+' << res.imag() << 'i';
    }
    else
        cout << "Неверный ввод";
}