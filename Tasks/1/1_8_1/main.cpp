///����� �������� � ����������, ����� ����� � ������� 0, ���������� ���������� �����.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, last_value = 0, max_ = 0;
    while(input != 0)
    {
        cin >> input;
        if(input > last_value) max_ = input;
        last_value = input;
    }
    cout << "���������� ����: " << max_ << '\n';
}
