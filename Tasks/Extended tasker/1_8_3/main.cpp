///����� �������� � ����������, ����� ����� � ������� 0, ���������� ������� �������������� ���� �����.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, coutValues = 0;
    double middleSum = 0;
    for(coutValues; input != 0; coutValues++)
    {
        cin >> input;
        middleSum += input;
    }
    middleSum /= coutValues;
    cout << "������� ��������������: " << middleSum << '\n';
}
