/*� ���������� �������� �����, ����� ����� � ������� �0�, ����� ������������ �� ���.*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, last_number = 0, max_number = 0;

    while(input != 0)
    {
        cin >> input;
        if(input > last_number) max_number = input;
        last_number = input;
    }
    cout << "\n����� ������� ����� " << max_number << '\n';
}
