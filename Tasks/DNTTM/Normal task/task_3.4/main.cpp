/*3.4.��������� ������ �� 10 ��������� ������� � ����������. ����� ������������ �
����������� �����.*/
#include <iostream>
using namespace std;
int main()
{
    int mas[10],a,i;
    setlocale(LC_ALL,"RUS");
    for(i=0; i<10; i++)
    {
        cin >> a;
        mas[i]=a;
    }
    for(i=0; i<10; i++)
    {
        if(mas[i]<2)
        {
            cout << '\n' << "������� ����� = " << mas[i] << '\n';
        }
        if(mas[i]>9)
        {
            cout << '\n' << "������� ����� = " << mas[i] << '\n';
        }
    }
}
