//2.5.� ���������� �������� �����, ���� �� ������ 0. ��������� �� �����
#include <iostream>
using namespace std;
int main()
{
    int a,sum;
    cin >> a;
    sum=a;
    while(a!=0)
    {
        cin >> a;
        sum=sum+a;
    }
    cout << sum << '\n';
}
