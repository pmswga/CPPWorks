//3.2.��������� ������ �� 10 ��������� ������� �� 10 �� 1. ��������� ����� ���������.
#include <iostream>
using namespace std;
int main()
{
    int mas[10],a,i;
    a=10;
    i=10;
    while(i>1)
    {
        mas[i]=i;
        a=a+mas[i];
        i--;
    }
    cout << a;
}
