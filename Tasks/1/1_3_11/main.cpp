/*�������� ���������� �������� ����, ����������� ��� ��������� ���� �� ������ � ����������.*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    double input, kg = 0;
    const double one_pound  = 453.59237;

    while(true)
    {
        cout << "��� � ������: ";
        cin >> input;

        double gramms = input * one_pound;
        kg = gramms * 0.001;

        cout << "\n��� � ����������� ����� " << kg << '\n' << "===========\n";
    }
}
