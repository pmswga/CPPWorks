/*� ���������� �������� �����, ����� ����� � ������� �0�, ����� ����������� �� ���. */
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, last_number = 0, min_number = 0;

    while(input != 0)
    {
        cin >> input;
        if(input < last_number and input != 0) min_number = input;
        last_number = input;
    }
    cout << "\n����� ������� ����� " << min_number << '\n';
}
