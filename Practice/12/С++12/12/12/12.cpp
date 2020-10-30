#include <iostream>
using namespace std;
 long int fact(int N);
int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Введите число ";
    cin >> a;
    cout << fact(a);
    return 0;
}
 long int fact(int N)
{
    if (N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}