///����� �������� � ����������, ����� ����� � ����� 0. ��������� ������� �� ����� ������������ ���� �����, ���� �� ����� �� ��������� 100, � �� ����� � ��������� ������.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, sum = 0, proz = 1;

    while(input != 0)
    {
        cin >> input;
        sum += input;
        if(input != 0) proz *= input;
    }
    if(sum < 100)
    {
        cout << "������������ �����: " << proz << '\n';
        cout << "����� �����: " << sum << '\n';
    }
    else cout << "����� �����: " << sum << '\n';
}
