#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    long long int n,p = 1,c = 1;
    cout << "Введите любое число"<<endl;
    cin >> n;
    if (n == 0) {
        cout << 0;
    }
    else
    {
        while ((p *= 2) <= n)
            c++;
        cout << c;
    }
    
}