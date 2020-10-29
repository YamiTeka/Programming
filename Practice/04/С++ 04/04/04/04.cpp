#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "Введите значение переменной a и b" << endl;
	cin >> a>> b;
	 cout << "Ввывод без дополнительной переменной" << endl;
	a = a + b;
	b = b - a;
	b = -b;
	a = a - b;
	cout << "a=" << a << " b=" << b << endl; 
	cout << "Ввывод с дополнительной переменной" << endl;
	double y,z,x;
	cin >> x>> y;
	z = x;
	x = y;
	y = z;
	cout << "x=" << x << " y=" << y;
	

}