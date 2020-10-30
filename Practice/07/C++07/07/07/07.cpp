#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian" );
    double v,p, s, x1, x2, x3, y1, y2, y3, a, b, c;
    cout << "Выберете каким способом найти S треугольника:1-через стороны,2-через вершины" << endl;
    cin >> v;
    if (v == 1 || v == 2) {
        if (v == 1) {
            cout << "Вы выбрали нахождение S через стороны" << endl;
            cout << "Введите стороны  a,b,c" << endl;
            cin >> a >> b >> c;
            p = (a + b + c) / 2;
            s = sqrt(p * ((p - a) * (p - b) * (p - c)));
            cout << "S=" << s;
        }
        else {
            cout << "Вы выбрали нахождение S через вершины" << endl;
            cout << "Введите координаты вершины A через пробел (x y) " << endl;
            cin >> x1 >> y1;
            cout << "Введите координаты вершины B через пробел (x y) " << endl;
            cin >> x2 >> y2;
            cout << "Введите координаты вершины C через пробел (x y) " << endl;
            cin >> x3 >> y3;
            s = (1 / 2) * (((x2 - x1) * (y3 - y1)) - ((x3 - x1) * (y2 - y1)));
            cout << "S=" << s;

        
        }
        
    }
    else
        cout << "Ошибочный ввод" << endl;
        
    


}