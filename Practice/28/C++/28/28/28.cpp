#include <iostream>
#include <algorithm>
#include<vector>
#include<map>
using namespace std;

void f(int n)
{
    map  < int, int> dict;
    int div = 2;
    while (n > 1)
    {
        for ( int i = 2; i <= n; i++)
        {
            if (!(n % i))
            {
                n /= i;

                dict[i] = dict.count(i) ? dict[i] + 1 : 1;
                break;
            }
        }
    }
    cout << "1";
    for (auto now : dict)
    {
        if (now.second > 1)
        {
            cout << "*" << now.first << "^" << now.second;
        }
        else
        {
            cout << "*" << now.first;
        }
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите значение n";
    cin >> n;
    f(n);
}