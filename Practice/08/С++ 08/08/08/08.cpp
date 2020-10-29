#include <iostream>
#include <string>
using namespace std;

int main()
{  setlocale(LC_ALL, "Russian");
int a, b, c;
char z;
   cout << "";
   cin >> a >> z >> b;
   switch (z)
            {       case '+':
            { c = a + b;
             cout << a << "+" << b << "=" << c << endl;

                break;
            }
            case '-':
            {
                c = a - b;
                cout << "результат: " << c << endl;
                break;
            }
            case '*':
            {
                c = a * b;
                cout << "результат: " << c << endl;
                break;
            }
            case '/':
            {
                c = a / b;
                cout << "результат: " << c << endl;
                break;
            }
   }