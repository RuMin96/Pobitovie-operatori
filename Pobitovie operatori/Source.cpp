#include <iostream>
using namespace std;

void main()
{
	int a, b;
	cout << "Введите два числа:"; cin >> a >> b;
	a = a^b;
	b = a^b;
	a ^= b;
	cout << a << b << endl;
}