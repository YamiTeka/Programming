
#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	double a(0),b(1);
	int k(0);
	
	cout << "Введите число "<<endl;
	cin >> a;
	cout << "Ввкдите степень" << endl; 
	cin >> k;

	for (int i = 0; i < k; i++)b *= a;
	cout << b << endl;       
	
}