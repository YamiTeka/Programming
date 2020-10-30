#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n,b, i = 2;
    cout << "Введите число"<<endl;
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            b = true;
            break;
        }
        i++;
    }
    if (!b)
    {
        cout << "Простое"<<endl;
    }
    else
    {
        cout << "Сложное"<< endl;
    }
        
    
}