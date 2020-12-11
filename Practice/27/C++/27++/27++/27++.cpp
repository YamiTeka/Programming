#include<iostream>
#include<cmath>

using namespace std;
void main()
{
    int x;
    cin >> x;
    int* a = new int[x];

    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
        for (int b = 0; b < 5; b++)
        {
            for (int c = b + 1; c < x; c++)
            {
                if (a[b] < a[c])
                {
                    int t = a[c];
                    a[c] = a[b];
                    a[b] = t;
                }
            }
        }
        if (i == 0)
            cout << a[0] << endl;
        if (i == 1)
            cout << a[0]<<" " << a[1] << endl;
        if (i == 2)
            cout << a[0]<<" " << a[1] << " " << a[2] << endl;
        if (i == 3)
            cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << endl;
        if (i == 4)
            cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] <<endl;
        if (i > 4) {
            cout << a[i - 4] << " " << a[i - 3] << " " << a[i - 2] << " " << a[i - 1] << " " << a[i] <<endl;
        }
    }




}
