#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	char z;
	cout << "Введите число-действие-число"<< endl;
	cin >> a >> z >> b;
	if (b == 0)
		cout << "Делить на ноль нельзя" << endl;
	else
    
	switch (z) {
	case '+':
	{c = a + b;
	cout << a << "+" << b << "=" << c;
	break;}
	case '-':
	{c = a - b;
	cout << a << "-" << b << "=" << c; 
	break;}
	case '*':
	{c = a * b;
	cout << a << "*" << b << "=" << c; 
	break;}
	case '/':
	{c = a / b;
	if (b == 0)
		cout << "Деление на ноль нельзя" << endl;
	else
	    cout << a << "/" << b << "=" << c; 
	break;}
	}

}