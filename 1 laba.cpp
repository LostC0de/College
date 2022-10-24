#include <iostream>
#include <cmath>
using namespace std;

void lab1();
void lab2();
void lab3();
void lab5();
void lab6();
void lab7();

int main()
{
	setlocale(LC_ALL, "ru");
	//lab1();
	//lab2();
	//lab3();
	//lab4();
	//lab5();
	lab6();
	//lab7();


	return 0;
}

void lab1()
{
	cout << "Введите бюджет семьи: ";
	int money; cin >> money;
	cout << "Расходы на жилье составляют: " << money * 0.36 << endl;
	cout << "Остаток средств: " << money * 0.64 << endl;
}
void lab2()
{
	int v1, v2;
	
	cout << "Введите скорость первого авто: ";
	cin >> v1;
	cout << "Введите скорость второго авто: ";
	cin >> v2;

	int s1 = v1 * 3;
	int s2 = v2 * 3;

	cout << "Расстояние составляет: ";
	if (s1 >= s2)
	{
		cout << s1 - s2;
	}
	else
	{
		cout << s2 - s1;
	}

	cout << endl;
}
void lab3()
{
	const double PI = acos(-1.0);
	cout << "Введите переменные a, b, x, z: ";
	int x, b, z, a;
	cin >> a >> b >> x >> z;

	double result1 = pow(cos((b * (pow(x, 5)))), 7);
	double result2 = (sin((pow(a, 2 * x)))) + cos((pow(x, 3) + pow(z, 5) - pow(a, 2)));
	double result3 = pow(log(a), 3);
	double chislit = result1 - result2 + result3;
	double znamenat = asin(pow(a, 2)) + atan(pow(x, 7) - pow(a, 2));
	cout << chislit / znamenat;

}


void lab5()
{
	cout << "Введите координаты x и y: ";
	int x, y;
	cin >> x >> y;

	if (x >= 2 || x <= -1)
	{
		if (y >= 1)
		{
			cout << "Ты попал\n";
		}
		else
		{
			cout << "Ты не попал\n";
		}
	}
	else
	{
		cout << "Ты не попал\n";
	}
}
void lab6()
{
	int year;
	cin >> year;
	int choise = year % 10;

	cout << "Вам " << year;
	if (choise == 1)
	{
		cout << " год";
	}
	else if (choise >= 2 && choise < 5)
	{
		cout << " года";
	}
	else
	{
		cout << " лет";
	}
}
void lab7()
{
	cout << "Введите год: ";
	unsigned int year;
	cin >> year;

	if (year % 4 == 0 && year % 100 != 0)
	{
		cout << "год високосный";
		return;
	}

	if (year % 100 == 0)
	{
		if (year % 400 == 0)
		{
			cout << "год високосный";
			return;
		}
	}
	cout << "год не високосный";
}
