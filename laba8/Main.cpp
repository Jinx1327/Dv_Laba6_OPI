﻿// laba8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>

#define _USE_MATH_DEFINES 
#include <math.h>

#include "Header1.h"

using namespace std;

int main() {
	float a, z, b, x, y;
	int a2, sum;
	cout << "Enter x, y, z";
	cin >> x >> y >> z;
	a = func1(x, y, z);
	cout << a << endl;
	cout << func2(x, y, z, a) << endl;
	a2 = int(a);
	cout << func3(a2);
}



//a = -4 * z * ((pow((sqrt(x + y) / pow(y, 2)), 1. / 3))- fabs(3*y+5*pow(x,(-1))))+pow(M_E,3);
//b = sqrt(x * x + a - y * y * pow(sin(x + z) / x, 3)) + sin(20. / 3 * M_PI);

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
