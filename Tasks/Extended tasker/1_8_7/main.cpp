///������������ � ��������� ������� �� ������. ��������� ��������� �������� ������ ���� ������ ����, ���� ������� �������� ������ ����, � ������ ���� �������� ��������� � ����������� ����.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input;
    while(true)
    {
        cin >> input;
        if(input < 0)
        {
            cout << "������� �������� ������: ";
            cin >> input;
        }
    }
}
