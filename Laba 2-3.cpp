#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	char ishode;
	int joba;
	cout << "Введите одно из значений N,S,W,E: ";
	cin >> ishode;
	cout << "Введите в какую сторону поворачивать. 0 прямо, 1 - поворот налево, -1 поворот направо:   ";
	cin >> joba;
	if (joba <= -2 or joba >= 2)
	{
		cout << "Ты че, бредишь что ли?"; 
			return 0;
	}

		switch (ishode)
		{
		case 'E': //Wostok
			switch (joba)
			{
			case 0:
				cout << "ВОСТОК";
				break;
			case 1: 
				cout << "СЕВЕР";
				break;
			case -1:
				cout << "ЮГ";
				break;
			}
			return 0;
			break;
		case 'N': //Sever
			switch (joba)
			{
			case 0:
				cout << "СЕВЕР";
				break;
			case 1:
				cout << "ЗАПАД";
				break;
			case -1:
				cout << "ВОСТОК";
				break;
			}
			return 0;
			break;
		case 'W': //Zapad
			switch (joba)
			{
			case 0:
				cout << "ЗАПАД";
				break;
			case 1:
				cout << "ЮГ";
				break;
			case -1:
				cout << "СЕВЕР";
				break;
			}
			return 0;
			break;
		case 'S': // Ug
			switch (joba)
			{
			case 0:
				cout << "ЮГ";
				break;
			case 1:
				cout << "ВОСТОК";
				break;
			case -1:
				cout << "ЗАПАД";
				break;
			}
			return 0;
			break;
		default:
			cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ НАПРАВЛЕНИЯ ВЕТРА!";
			return 0;
			break;
	}

}
