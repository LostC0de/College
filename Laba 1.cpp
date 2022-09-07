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
int main()
{
	first_coil();
	second_coil();
	thirt_coil();
	fourth_coil();
}
