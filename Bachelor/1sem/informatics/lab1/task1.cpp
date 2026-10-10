#include <iostream>

int used_float(){
    float a = 1000.0;
    float bf = 0.0001;

    float prsum1 = (a+bf)*(a+bf); //Нахождение значения уменьщаемого
    float prsum2 = (a*a + 2*a*bf); //Нахождение значения вычитаемого
    float numerator = prsum1 - prsum2; //Нахождение значения числителя дроби
    float denominator = bf*bf; //Нахождение знаменателя
    float res = numerator / denominator; //Нахождение результата

    std::cout << prsum1 << std::endl;
    std::cout << prsum2 << std::endl;
    std::cout << numerator << std::endl;
    std::cout << denominator << std::endl;
    std::cout << res << std::endl;
    return 0;
}
int used_double(){
    float a = 1000.0;
    double bf = 0.0001;

    double prsum1 = (a+bf)*(a+bf); //Нахождение значения уменьщаемого
    double prsum2 = (a*a + 2*a*bf); //Нахождение значения вычитаемого
    double numerator = prsum1 - prsum2; //Нахождение числителя
    double denominator = bf*bf; //Нахождение знаменателя
    double res = numerator / denominator; //Нахождение результата

    std::cout << prsum1 << std::endl; 
    std::cout << prsum2 << std::endl; 
    std::cout << numerator << std::endl;
    std::cout << denominator << std::endl;
    std::cout << res << std::endl;
    return 0;
}

int main(){
    used_float();
    std::cout<< " " << std::endl;
    used_double();
    return 0;
}