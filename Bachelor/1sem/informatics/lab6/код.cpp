#include <iostream>
#include <clocale>
using namespace std;

int main()
{   
    wchar_t s[255], form[255];
    bool f = true;
    wcin.getline(s, 255);
    int n = 0, f_len = 0;
    for (int i = 0; s[i] != '\0'; ++i)
    {   
        if (s[i] != ' ')
        {
            if (s[i] >= 65 && s[i] <= 90)
                form[i-n] = (s[i] + 32);
            else if (s[i] >= 192 && s[i] <= 223)
                form[i-n] = (s[i] + 32);
            else
                form[i-n] = s[i];
            f_len += 1;
        }
        else
            n += 1;
    }
    
    for (int i = 0; (i < f_len/2)&&f; ++i)
    {
        if (form[i] != form[f_len-i-1])
            f = false;
    }
    
    setlocale(LC_ALL, ".65001");
    if (f)
        cout << "Строка является палиндромом" << endl;
    else
        cout << "Строка не является палиндромом" << endl;
    return 0;
}