/*2.2.������������ ������ � ���������� �����, ������� � ����� ������ �� ��� ����� ��� 50,
������ ��� �����*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    do
    {
    cin >> a;
    if(a<50)
    {
        cout << 50 << '\n';
        cout << "Bolshe" << '\n';
    }
    if(a>50)
    {
        cout << "No less" << '\n';
        cout << a << '\n';
    }
    if(a==50)
    {
        cout << "RAVNO" << '\n';
    }
    }while(a!=0);
}
