#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	char z;
	cout << "Введите число-действие-число";
	cin >> a >> z >> b;
	switch (z) {
		case '+':
			c = a + b;
			cout << a << "+" << b << "=" << c; 
		case '-':
			c = a - b;
			cout << a << "-" << b << "=" << c; 
		 case '*':
	        c = a * b;
	        cout << a << "*" << b << "=" << c; 
		case '/':
			c = a / b;
			cout << a << "/" << b << "=" << c; 

}