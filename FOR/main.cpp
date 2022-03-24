//FOR
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

//#define FOR_SYNTAX
//#define FACTORIAL
//#define POWER

void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_SYNTAX
	int n = 10;
	cout << "Введите количество итераций: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_SYNTAX

#ifdef FACTORIAL
	//С клавиатуры вводится число, 
//нужно вычислить факториал этого числа.
	int n;	//Число, введенное с клавиатуры
	double f = 1;	//Факториал числа
	cout << "Введите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;
	int n;
	double N=1;
	cout << "Введите основание степени"; cin >> a;
	cout << "Введите показатель степени"; cin >> n;
	cout << a << " ^ " << n << " = ";
	if (n < 0)
	{
		n = -n;
		a = 1 / a;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

	int a = 0;
	int b = 1;
	int c = a + b;
	int n; //предел
	cout << "Введите количество чисел из ряда фибоначчи:"; cin >> n;
	for(int i=0; i<n; i++)
	{
		cout << a << "\t";
		a = b;
		b = c;
		c = a + b;
	}
}

/*
------------------------------------
Ctrl + Z - отмена действия
Ctrl + Y - вернуть отмененное действие
Ctrl + D - duplicate line (дублировать строку)
Ctrl + K,C - закомментировать.
Ctrl + K,U - раскомментировать.
------------------------------------
*/