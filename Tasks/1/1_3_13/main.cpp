///�������� ����������, ����������� ��� ���������� ��������� �������, ��������� �� ���������� ��������, ���������� � �������.
#include <iostream>
#include <windows.h>
using namespace std;

const int price_notebook = 50, price_pencil = 10, price_ruler = 25;

int main()
{
    setlocale(LC_ALL, "RUS");
    int sum = 0, setNPR[3], i = 0;

    for(i; i < 3; i++)
    {
        switch(i)
        {
            case 0: cout << "������� ���-�� �����: "; break;
            case 1: cout << "������� ���-�� ����������: "; break;
            case 2: cout << "������� ���-�� ������: "; break;
        }
        cin >> setNPR[i];
    }
    for(i = 0; i < 3; i++)
    {
        switch(i)
        {
            case 0: sum += setNPR[i] * price_notebook; break;
            case 1: sum += setNPR[i] * price_pencil; break;
            case 2: sum += setNPR[i] * price_ruler; break;
        }
    }
    cout << "======================" << '\n';
    cout << "������ ����� �������: " << sum << " ���.";
}
