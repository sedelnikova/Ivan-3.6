// Иван 3.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float A, O;

	cout << "Введите, пожалуйста, A =";
	cin >> A;
	O = A * A;
	A = O * O;
	O = A * A;
	cout << "A= " << O << endl;
	return 0;
}