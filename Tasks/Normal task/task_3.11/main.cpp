/*3.11. �������� �������, ������������ ����������� �� ���� �����. ��������
���������, ��������������� ������ �������.*/
#include <iostream>
using namespace std;

float min(float a, float b)
{
    if(a>b)
    {
        cout << a;
    }else
    {
        cout << b;
    }
    return a,b;
}

int main()
{
    float a,b;
    cin >> a;
    cin >> b;
    min(a,b);
}
