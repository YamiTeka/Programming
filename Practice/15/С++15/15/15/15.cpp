#include <iostream>
using namespace std;

main(){
     int n, u, i;
    n = rand() % 100+1;
    i = 1;
    while (i <= 5)
    {
     cin >> u;
        if (u < n) {
            cout << "Загаданное число больше"<<endl;
        }
        else 
            if (u > n) {
                cout << "Загаданное число меньше" << endl ;
            }
            else {
                cout << ("Поздравляю! Вы угадали");

            }
     i += 1;
     }

    if (i == 5) {
        cout << ("Не угадали. Это число ", n);
    }
}