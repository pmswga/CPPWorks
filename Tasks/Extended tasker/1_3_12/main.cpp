/*���������� �������� ������ � �������� ����������, �������������� ���������� ������ �� ������*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    float start_capital = 0, precent = 10.5, days = 0, calendar_days = 365;
    float s = 0, sp = 0;

    cout << "������� ����� ������: ";
    cin >> start_capital;
    cout << "������� ���������� ������: ";
    cin >> precent;
    cout << "������� ���-�� ���� ���������� ���������: ";
    cin >> days;

    s = start_capital * ( start_capital * precent * (days / calendar_days) );
    sp = (start_capital * precent * (days / calendar_days) ) / 100;

    cout << "\n========================\n";
    cout << "���������� ������: " << precent << "%" << '\n' << "���-�� ���� ���������� ���������: " << days << '\n';
    cout << "\n�����:" << '\n';
    cout << "�����(� %) = " << sp << '\n' << "����� ������ � ��������� = " << s << '\n';
}
