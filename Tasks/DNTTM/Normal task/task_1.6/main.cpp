/*1.6.������������ ������ 2 ����� � ����������: ����� �������� � ����� ������. ���������
��� ����� � �������*/
#include <iostream>
using namespace std;
int main()
{
    float a,b,c;
    setlocale(LC_ALL,"RUS");
    cout << "������� �������" << '\n';
    cin >> a;
    cout << "������� �����" << '\n';
    cin >> b;
    a=a*32;
    c=a*100;
    b=b*30,803;
    cout << "������� � ��������" << '\n';
    cout << c << '\n';
    cout << "����� � ��������" << '\n';
    cout << b << '\n';
}
