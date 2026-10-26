#include <iostream>
using namespace std;

int main(){
    int a = 1000;
    float b1 = 0.0001;

    float prsum1 = (a+b1)*(a+b1); //Нахождение значения уменьщаемого
    float prsum2 = (a*a + 2*a*b1); //Нахождение значения вычитаемого
    float numerator = prsum1 - prsum2; //Нахождение значения числителя дроби
    float denominator = b1*b1; //Нахождение знаменателя
    float res = numerator / denominator; //Нахождение результата

    cout << prsum1 << endl;
    cout << prsum2 << endl;
    cout << numerator << endl;
    cout << denominator << endl;
    cout << res << endl;

    cout << ' ' << endl;

    double b2 = 0.0001;

    double prsum1D = (a+b2)*(a+b2); //Нахождение значения уменьщаемого
    double prsum2D = (a*a + 2*a*b2); //Нахождение значения вычитаемого
    double numeratorD = prsum1D - prsum2D; //Нахождение числителя
    double denominatorD = b2*b2; //Нахождение знаменателя
    double resD = numeratorD / denominatorD; //Нахождение результата

    cout << prsum1D << endl; 
    cout << prsum2D << endl; 
    cout << numeratorD << endl;
    cout << denominatorD << endl;
    cout << resD << endl;
    return 0;
}