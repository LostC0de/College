#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int del = N % 10;
	if (N > 109) {
		cout << "GO IN GROB";
		return 0;
	}
	while (N > 19 or N < 5 and N > 0 and N < 110)
	{
		if (del == 2 or del == 3 or del == 4 and N < 100)
		{
			cout << N << " Goda";
		}
		if (del == 5 or del == 6 or del == 7 or del == 8 or del == 9 or del == 0  and N < 105)
		{
			cout << N << " Let";
		}
		if (del == 1 and N < 100) {
			cout << N << " God";
		}
		return 0;
	}
	if (N < 20 and N > 5)
	{ 
		cout << N << " Let";
	}
	if (N <= 0) {
		cout << "URA TI NE RODILSA";
	}
}
