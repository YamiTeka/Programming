    double a, b, c, x1, x2,x;
    double d;
    cout << "Введите переменную a"<<endl;#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    cin >> a;
    cout << "Введите переменную b" << endl;
    cin >> b;
    cout << "Введите переменную с" << endl;
    cin >> c;
    d = (b * b) - (4 * a * c);
    if (a == 0) { 
        cout << "Деление на ноль не возиожно, выберите другое число" << endl;
    } else if (d < 0) {
        cout << "Уроавнение не имеет корней" << endl;
    } else if (d == 0) {
        x = (-b/(2 * a));
         cout << "x="<<x << endl;
    } else (d > 0); {
      x1= (-b + sqrt(d)) / (2 * a);
      x2= (-b - sqrt(d)) / (2 * a);
      cout << "x1=" << x1 << endl << "x2=" <<x2 << endl;
    } 
    //переписать последовательность

  
}

