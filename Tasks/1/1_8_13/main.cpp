///1.8.13. �������� �����. ����� ����� � 0. ������� �������� ������� � ������������.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int value = 1;
    int first_value = 0, end_value = 0;
    cin >> value;
    first_value = value;

    while(value != 0)
    {
        cin >> value;
        if(value != 0) end_value = value;
    }
    cout << first_value << '\n';
    cout << min(first_value, end_value) << '\n';

    cout << "�������� ������� ����� � ������������ = " << (first_value - min(first_value, end_value));


}
