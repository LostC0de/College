#include <iostream>
using namespace std;

void first_coil()
{
	int four;
	cin >> four;
	int first = four % 10;
	int first_1 = first * 1000;
	int second = four % 100;
	int second_1 = (second / 10) * 100;
	int thirt = four % 1000;
	int thirt_1 = (thirt / 100) * 10;
	int fourth = four / 1000;
	int END = first_1 + second_1 + thirt_1 + fourth;
	cout << END;
}
void second_coil()
{
	int four;
	cin >> four;
	int first = (four / 1000) * 100;
	int second = ((four / 100) * 1000) % 10000;
	int thirt = (four % 100) / 10;
	int fourth = (four % 10) * 10;
	cout << first + second + thirt + fourth;
}
void thirt_coil()
{
	int four;
	cin >> four;
	int first = ((four % 1000) / 100) * 10;
	int second = ((four % 100) / 10) * 100;
	int thirt = ((four % 10000) / 1000) * 1000;
	int fourth = four % 10;
	int END = first + second + thirt + fourth;
	cout << END;
}
void fourth_coil()
{
	int four;
	cin >> four;
	int first = four / 100;
	int second = (four % 100) * 100;
	cout << first + second;
}
void passive_coil()
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите хоть что-нибудь до 4 чисел: ";
	int four;
	cin >> four;
	int first = four % 10;
	int first_1 = first * 1000;
	int second = four % 100;
	int second_1 = (second / 10) * 100;
	int thirt = four % 1000;
	int thirt_1 = (thirt / 100) * 10;
	int fourth = four / 1000;
	int END = first_1 + second_1 + thirt_1 + fourth;
	cout << "\n" << END;

	int first_autist = (four / 1000) * 100;
	int second_autist = ((four / 100) * 1000) % 10000;
	int thirt_autist = (four % 100) / 10;
	int fourth_autist = (four % 10) * 10;
	cout << "\n" << first_autist + second_autist + thirt_autist + fourth_autist;

	int first_a = ((four % 1000) / 100) * 10;
	int second_a = ((four % 100) / 10) * 100;
	int thirt_a = ((four % 10000) / 1000) * 1000;
	int fourth_a = four % 10;
	int END_AUTIST = first_a + second_a + thirt_a + fourth_a;
	cout << "\n" << END_AUTIST;

	int first_b = four / 100;
	int second_b = (four % 100) * 100;
	cout << "\n" << first_b + second_b;
}
int main()
{
	setlocale(LC_ALL, "RUS");
	int vvod;
	cout << "Введите номер нужной вам сортировки до 4, введите 5 чтобы вывести все разом: ";
	cin >> vvod;
	switch (vvod)
	{
	case 1:
		first_coil();
		break;
	case 2:
		second_coil();
		break;
	case 3:
		thirt_coil();
		break;
	case 4:
		fourth_coil();
		break;
	case 5:
		passive_coil();
		break;
	default:
		cout << "Вы ввели дичь";

		break;
		}
	
	
	
}
