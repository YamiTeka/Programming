#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	// для X0,V0 и t выбираем пременную double т.к эти значения могут быть не целыми числами 
	double X0,V0,t;
	double a;
	double g = 9.8;
	a = g;
	cout << "Введите значение переменных через пробел x0, V0,t" << endl;
	cin >> X0 >> V0 >> t;
	
	cout <<"Объект преодолеет растояни в " << X0 + V0 * t - ((a * t * t)/2);
}
	
