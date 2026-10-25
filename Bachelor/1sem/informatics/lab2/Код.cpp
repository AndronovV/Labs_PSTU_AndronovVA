#include <iostream>
#include <clocale>
using namespace std;

int main(){
    setlocale(LC_ALL, ".65001");
    int s = 0;
    for (int i = 3; i < 200; i += 3)
    {
        s += i;
    }
    cout << "Сумма чисел, кратных 3 и меньших 200 = " << s << endl;
    return 0;
}