#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    float e = 0.0001;
    for (float x = 0.1; x <= 1; x += 0.09)
    {
        float sn = 1, se = 1, an = 1; 
        for (int i = 1; i <= 10; i++)
        {   
            an *= log(3)*x/i;
            sn += an;
        }
        an = 1;
        int n = 1;
        while (fabs(an) > e)
        {
            an *= log(3)*(x-e)/n;
            se += an;
            n += 1;
        }

        cout << "x = " << x << ", sn = " << sn << ", se = " << se << ", y = " << pow(3, x) << endl;
    }
    return 0;
}
