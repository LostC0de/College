
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int arr[100];
    int size = 100;
    for (int i = 0; i < size; i++)
    {
        int raa = rand() % 101;
        arr[i] = raa;
        cout << arr[i] << "LAMS" << "\n";
    }

    cout << "Заполнение окончено";

    for (int s = 1; s < 100; s++)
    {
        for (int b = -1; b++; b < s)
        {
            cout << arr[s] + arr[b] << '\n';
        }
        
    }
    
}
