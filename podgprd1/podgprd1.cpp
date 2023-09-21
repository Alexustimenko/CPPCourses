#include <iostream>;
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double h, x, y, z, A, a,b,B,AB,c,C,d,D,pervchast,e,vtorchast,pervtorchast,f,trchast,pervtortrchast,t,chetvchast;
	cout << "¬ведите x " << endl;
	cin >> x;
	cout << "¬ведите y " << endl;
	cin >> y;
	cout << "¬ведите z " << endl;
	cin >> z;
	a = y + 1;
	A = pow(x, a);
	b = y - 1;
	B = exp(b);
	AB = A + B;
	c = tan(z);
	C = abs(y - c);
	d = x * C;
	D = d + 1;
	pervchast = AB / D;
	e = abs(y - x);
	vtorchast=1 + e;
	pervtorchast = pervchast * vtorchast;
	f = pow(e, 2);
	trchast = f / 2.0;
	pervtortrchast = pervtorchast + trchast;
	t = pow(e, 3);
	chetvchast = t / 3.0;
	h = pervtortrchast - chetvchast;
	cout << h << endl;
	system("pause");
	return 0;
}