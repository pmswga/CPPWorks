/*� ���������� �������� �����, ����� ����� � ������� �0�, ����� �� �����.*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, sum = 0;

    while(input != 0)
    {
        cin >> input;
        sum += input;
    }
    cout << "\n����� ������� ����� ����� " << sum << '\n';
}
