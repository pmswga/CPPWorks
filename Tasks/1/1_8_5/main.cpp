///����� �������� � ����������, ����� ����� � ������� 0, ����������, ������� ����� �� ��������� ������ 0.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, countValues = 0;
    while(input != 0)
    {
        cin >> input;
        if(input > 0) countValues++;
    }
    cout << "���-�� �������� �����, ������� ������ 0: " << countValues;
}
