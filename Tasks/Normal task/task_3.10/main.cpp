/*3.10. �������� ������� ��� ���������� �� ����� 3.3, 3.4, 3.5, 3.6, � ����� ���
���������� ������� � ������ ������� �� �����. �������� ���������,
��������������� ������ �������.*/
#include <iostream>
using namespace std;
//������� ����������
int filling(int mas[], int a, int i)
{
    for(i=0; i<10; i++)
    {
        cout << "������ " << i << " = ";
        cin >> a;
        mas[i]=a;
    }
    return mas[i];
}
//������� �������� ������������� �����
int NLTZ(int mas[],int i)
{
    int c=0;
    for(i=0; i<10; i++) if(mas[i]<0) c=c+mas[i];
    cout << '\n' << "�����, ������� ������ ���� = " << c << '\n';
}
//������� ����������� ����������� ��� �������� �������
int dORi(int mas[],int i)
{
    int a;
    setlocale(LC_ALL,"RUS");
    for(int i=0,s=1; i<10 and s<10; i++ and s++)
    {
        if(mas[i]>mas[s]) cout << '\n' << "������ ���������" << '\n';
        if(mas[s]>mas[i]) cout << '\n' << "������ ������������" << '\n';
    }
}
//������� ������ ����������� � ����������� �����
int search(int mas[],int i)
{
    for(i=0; i<10; i++)
    {
        if(mas[i]<2) cout << '\n' << "������� ����� = " << mas[i] << '\n';
        if(mas[i]>9) cout << '\n' << "������� ����� = " << mas[i] << '\n';
    }
}
//������� ����������� ������� � ��������� � ������
/*
int Index(int mas[],int i)
{
    int s,b;
    cout << '\n' << "������� ��������" << '\n' << '\n';
    cin >> b;
    for(i=0; i<10; i++)
        if(mas[i]==b)
        {

        }
    cout << i;
}*/
//������� ������ ������� �� �����
void output(int mas[],int i)
{
    cout << '\n' << "������" << '\n';
    for(i=0; i<10; i++) cout << mas[i] << ',';
}

int main()
{
    int mas[10],a,i;
    setlocale(LC_ALL,"RUS");
    cout << "��������� ������" << '\n';
        filling(mas,a,i);
            NLTZ(mas,i);
                dORi(mas,i);
                    search(mas,i);
                        //Index(mas,i);
                            output(mas,i);
}
