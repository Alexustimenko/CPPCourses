#include <iostream>
#include<cmath>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*double a, P;
	cout << "Введите стророну квадрата a: " << endl;
	cin >> a;
	P = a * 4;
	cout << "Периметр квадрата = " <<P<< endl;
	*/
	//begin2
	/*double S, a;
	cout << "Введите стророну квадрата a: " << endl;
	cin >> a;
	S = pow(a, 2);
	cout << "Площадь квадрата = " << S << endl;*/
	//begin3
	/*double a, b, S, P;
	cout << "Введите стророну прямоугольника a: " << endl;
	cin >> a;
	cout << "Введите стророну прямоугольника b: " << endl;
	cin >> b;
	S = a * b;
	P = 2 * (a + b);
	cout << "Площадь прямоугольника = " << S << endl;
	cout << "Периметр прямоугольника = " << P << endl;
*/
	//begin4
	/*double d, pi, L;
	cout << "Введите диаметр окружности d: " << endl;
	cin >> d;
	pi = 3.14;
	L = pi * d;
	cout << "Длина окружности = " << L << endl;*/
	//begin5
	/*double a, V, S;
	cout << "Введите длину ребра куба a: " << endl;
	cin >> a;
	V = pow(a, 3);
	S = 6 * pow(a, 2);
	cout << "Объём куба = " << V << endl;
	cout << "Площадь поверхности куба = " << S << endl;*/
	//begin6
	/*double a, b, c, V, S,k,l,m,r;
	cout << "Введите длину ребра прямоугольного параллелепипеда a: " << endl;
	cin >> a;
	cout << "Введите длину ребра прямоугольного параллелепипеда b: " << endl;
	cin >> b;
	cout << "Введите длину ребра прямоугольного параллелепипеда c: " << endl;
	cin >> c;
	V = a * b * c;
	k = a * b;
	l = b * c;
	m = a * c;
	r = k + l + m;
	S = 2 * r;
	cout << "Объём прямоугольного параллелепипеда = " << V << endl;
	cout << "Площадь поверхности прямоугольного параллелепипеда = " << S << endl;*/
	//begin7
	/*double L, S, R,pi;
	cout << "Введите радиус круга R = " << endl;
	cin >> R;
	pi = 3.14;
	L = 2 * pi * R;
	S = pi * pow(R, 2);
	cout << "Длина окружности = " << L << endl;
	cout << "Площадь круга = " << S << endl;*/
	//begin8
	/*double a, b, sr;
	cout << "Введите a: " << endl;
	cin >> a;
	cout << "Введите b: " << endl;
	cin >> b;
	sr = (a + b) / 2;
	cout << "Среднее арифметическое = " << sr << endl;*/
	//begin9
	/*double a, b, k,r;
	cout << "Введите a: a>=0" << endl;
	cin >> a;
	cout << "Введите b: "b>=0 << endl;
	cin >> b;
	k = a * b;
	r = sqrt(k);
	cout << "Среднее геометрическое = " << r << endl;*/
	//begin10
	/*double a, b, s, r, p, ch;
	cout << "Введите a: a>0 or a<0" << endl;
	cin >> a;
	cout << "Введите b: b>0 or b<0" << endl;
	cin >> b;
	s = pow(a, 2) + pow(b, 2);
	r = pow(a, 2) - pow(b, 2);
	p = pow(a, 2) * pow(b, 2);
	ch = pow(a, 2) / pow(b, 2);
	cout << "Сумма квадратов = " << s << endl;
	cout << "Разность квадратов = " << r << endl;
	cout << "Произведение квадратов = " << p << endl;
	cout << "Частное квадратов = " << ch << endl;*/
	//begin11
	/*double a, b, s, r, p, ch;
	cout << "Введите a: a>0 or a<0" << endl;
	cin >> a;
	cout << "Введите b: b>0 or b<0" << endl;
	cin >> b;
	s = abs(a) + abs(b);
	r = abs(a) - abs(b);
	p = abs(a) * abs(b);
	ch = abs(a) / abs(b);
	cout << "Сумма модулей = " << s << endl;
	cout << "Разность модулей = " << r << endl;
	cout << "Произведение модулей = " << p << endl;
	cout << "Частное модулей = " << ch << endl;*/
//begin12
//double a, b, c, P, k;
//cout << "Введите a: " << endl;
//cin >> a;
//cout << "Введите b: " << endl;
//cin >> b;
//k = pow(a, 2) + pow(b, 2);
//c = sqrt(k);
//P = a + b + c;
//cout << "Гипотенуза прямоугольного треугольника = " << c << endl;
//cout << "Периметр прямоугольного треугольника = " << P << endl;
//begin13
//double R1, R2, S1, S2, S3,pi;
//pi = 3.14;
//cout << "Введите радиус первого круга R1 = (R1>R2) " << endl;
//cin >> R1;
//cout << "Введите радиус первого круга R2 = " << endl;
//cin >> R2;
//S1 = pi * pow(R1, 2);
//S2 = pi * pow(R2, 2);
//S3 = S1 - S2;
//cout << "Площадь первого круга = " << S1 << endl;
//cout << "Площадь второго круга = " << S2 << endl;
//cout << "Площадь кольца = " << S3 << endl;
//begin14
/*double L, pi, R, S;
pi = 3.14;
cout << "Введите длину окружности L: " << endl;
cin >> L;
R = L / (2 * pi);
S = pi * pow(R, 2);
cout << "Радиус окружности = " << R << endl;
cout << "Площадь круга = " << S << endl;*/
//begin19
//double x1, y1, x2, y2, a, b, P, S,k,l,m,z;
//cout << "Введите x1:" << endl;
//cin >> x1;
//cout << "Введите y1:" << endl;
//cin >> y1;
//cout << "Введите x2:" << endl;
//cin >> x2;
//cout << "Введите y2:" << endl;
//cin >> y2;
//k = y1 - y2;
//l = pow(k, 2);
//a = sqrt(l);
//m = x2 - x1;
//z = pow(m, 2);
//b = sqrt(z);
//P = 2 * (a + b);
//S = a * b;
//cout << "Периметр прямоугольника = " << P << endl;
//cout << "Площадь прямоугольника = " << S << endl;
//begin15
//double S, D, L, pi,k,d2;
//pi = 3.14;
//cout << "Введите площадь круга S:" << endl;
//cin >> S;
//k = 4 * S;
//d2 = k / pi;
//D = sqrt(d2);
//L = pi * D;
//cout << "Диаметр круга = " << D << endl;
//cout << "Длина окружности = " << L << endl;
//begin16
//double x1, x2, r;
//cout << "Введите x1: " << endl;
//cin >> x1;
//cout << "Введите x2: " << endl;
//cin >> x2;
//r = abs(x2 - x1);
//cout << "Расстояние между точками = " << r << endl;
system("pause");
	return 0;
	}