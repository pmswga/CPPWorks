///�������� ���������, ������� ������� �� ����� �����.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int length_line;
    char symbol;
    cout << "������� ����� �����: ";
    cin >> length_line;
    cout << "������� ������������ ������: ";
    cin >> symbol;

    for(int i = 0; i < length_line; i++) cout << symbol;
}
