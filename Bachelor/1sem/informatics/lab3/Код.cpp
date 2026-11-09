#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    double a = 0.1, b = 1.0, e = 0.00001;
    int k = 10;
    double step = (b-a)/k;
    for (double x = a; x <= b; x += step)
    {
        double sn = 1.0, se = 1.0, an = 1.0; 
        for (int i = 1; i <= 10; ++i)
        {   
            an *= log(3)*x/i;
            sn += an;
        }
        an = 1.0;
        for (int i = 1; (fabs(an) > e); ++i)
        {
            an *= log(3)*x/i;
            se += an;
        }

        cout << "x = " << x << ", sn = " << sn << ", se = " << se << ", y = " << pow(3, x) << endl;
    }
    return 0;
}
