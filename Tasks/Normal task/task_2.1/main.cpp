//2.1.����� ������������ �� 3-�� �����.
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,m;
    cin >> a;
    cin >> b;
    cin >> c;
     if(a>b)
    {
        if(a>c)
        {
            cout << a;
        }else
        {
            cout << c;
        }
    }else
    {
        if(b>c)
        {
            cout << b;
        }else
        {
            cout << c;
        }
    }
}
