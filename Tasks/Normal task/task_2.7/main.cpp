//2.7.� ���������� �������� ����� ���� �� ������ 0. ����� ������������.
#include <iostream>
using namespace std;
int main()
{
    int a,m;
    m=0;
    while(a!=0)
    {
        cin >> a;
        if(a>m)
        {
            m=a;
        }
    }
    cout << m << '\n';
}
