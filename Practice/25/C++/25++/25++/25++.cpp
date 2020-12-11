
#include <iostream>
#include <vector>
#include <ctime>
#include <clocale>

using namespace std;
enum Order {w,v};

bool check(vector<int>& a, Order o)
{
	switch (o)
	{
	case w:
		for (int i = 0; i < a.size() - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				return false;
				break;
			}
		}
		break;
	case v:
		for (int i = 0; i < a.size() - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				return false;
				break;
			}
			break;
		}
	}
	return true;
}
bool check(int a, int b, int c, Order o) {
	switch(o)
	{
	case w:
		if (b > c || a > b || a > c) 
			return false;
		break;
	case v:
		if (b < c || a < b || a < c)
			return false;
		break;
	}
	return true;
}
void BozoSort(vector<int>& a, Order o = w)
{
	bool s = check(a, o);
	while (!s)
	{
		int r1 = rand() % a.size();
		int r2 = rand() % a.size();
		int t = a[r1];
		a[r2] = a[r1];
		a[r1] = t;
		s = check(a, o);
	}
}
void BozoSort(int& x, int& y, int& z, Order o = w) 
{
	bool s = check(x, y, z, o);
	int t;
	while (!s)
	{
		int r = rand() % 3;
		switch (r) 
		{
		case 0:
			t = x;
			x = y;
			y = t;
			break;
		case 1:
			t = x;
			x = z;
			z = t;
			break;
		case 2:
			t = z;
			z = y;
			y = t;
			break;
		}
		s = check(x, y, z, o);
	}
}
void print(vector<int> a) 
{
	for (int i = 0; i < a.size(); i++)
	cout << a[i] << " ";
	cout << endl << endl;
}
void print(int a, int b, int c)
{
	cout << a << " " << b << " " << c << endl << endl;
}
int main() {
	srand(time(0));
	int k;
	cin >> k;
	int* a = new int[k];

	for (int i = 0; i < k; i++)
		cin >> a[i];
	vector<int> b;
	for (int i = 0; i < k; i++)
	{
		b.push_back(a[i]);
	}
	int x = b[0], y = b[1], z = b[2];
	cout << endl;
	BozoSort(b, w);
	print(b);
	BozoSort(b, v);
	print(b);
	BozoSort(b, w);
	print(b);
	BozoSort(b, v);
	print(b);
	BozoSort(x,y,z, w);
	print(x,y,z);
	BozoSort(x,y,z, v);
	print(x,y,z);
	return 0;

}













