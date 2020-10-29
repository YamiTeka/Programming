#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n1,n2, m1, m2, t,p,r,s;
	char z;
	cout << "Введите время прихода первого человека через ':'(например: 12:00)"<<endl;
	cin >> n1 >>z>>m1;
	cout << "Введите время прихода второг человека через ':'" << endl;
	cin >> n2 >> z >> m2;
	t = n2 - n1;

		if ((n1 <= 23 && n1 >= 0)&&(n2 <= 23 && n2 >= 0)){
			n1,n2 = true;
		}
		else {
			cout << "для часов выберете число от 0 до 23" << endl;
		}
		if ((m1 <= 59 && m1 >= 00)&&( m2 <= 59 && m2 >= 00)) {
			m1 = true;
			if (m1 >= 30) {
				p = m1 -30;
			}
			else {
				p = m1;
			}
			if (m2 >= 30) {
				r = m2 - 30;
			}
			else {
				r = m2;
			}
			s = r - p;
		}
		else {
			cout << "для минут выберете число от 00 до 59" << endl;
		}
		

		if ((t >= -1 && t <= 1)||(t==23) ||(t==-23)){
			t = true;
		}
		else {
			cout << "встреча не состоится" << endl;
		}
		if (s >= -15 && s <= 15) {
			cout << "Встреча состоится" << endl;
		}
		else {
			cout << "Вчтреча не состоится" << endl;
		}
}  