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
	cout << "������� ���������� ��������: "; cin >> n;
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
	//� ���������� �������� �����, 
//����� ��������� ��������� ����� �����.
	int n;	//�����, ��������� � ����������
	double f = 1;	//��������� �����
	cout << "������� �����: "; cin >> n;
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
	cout << "������� ��������� �������"; cin >> a;
	cout << "������� ���������� �������"; cin >> n;
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
	int n; //������
	cout << "������� ���������� ����� �� ���� ���������:"; cin >> n;
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
Ctrl + Z - ������ ��������
Ctrl + Y - ������� ���������� ��������
Ctrl + D - duplicate line (����������� ������)
Ctrl + K,C - ����������������.
Ctrl + K,U - �����������������.
------------------------------------
*/