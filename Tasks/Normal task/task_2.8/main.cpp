/*2.8.����� K �������� � ����������. ������� �� ����� ������������� �������� ��
��������� ������� K ������.*/
#include <iostream>
using namespace std;

int pyramid(int a)
{
    int height,width;
    height=1;
    width=0;
    while(height<=a)
    {
        width = 0;
        while(width < height)
        {
            cout << "*";
            width++;
        }
        cout << '\n';
        height++;
    }
}

int main()
{
    int a;
    cin >> a;
    pyramid(a);
}
