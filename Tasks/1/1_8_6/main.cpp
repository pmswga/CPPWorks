///�������� ������������������ ����� �� ���, ���� �� ����� ������� ��� ������ ����� ������. ������� �� ����� ���������� ��������� �����.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, last_value = 0, countValues = 0;
    while(true)
    {
        cin >> input;
        countValues++;
        if(last_value == input) break;
        last_value = input;
    }
    cout << "���-�� ������� �����: " << countValues << '\n';
}
