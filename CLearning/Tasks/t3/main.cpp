#include <iostream>
#include <stdlib.h>              /// ����� ��� ������� random()
#include <time.h>               ///  ����� ��� ������� time()
#include <vector>               ///  ����� ��� ��������
using namespace std;

void to(vector<int>);                /// �������� �������
void ot(vector<int>, vector<int>);   ///  ��� ��������, ��� �� ���-�� ����� �� ������

void to(vector<int> v)
{
    vector<int> a(v.size()), b(v.size());

    for (int i = 0; i < v.size(); i++)         /// �������� ��� ��������� ��������
        if (v[i] > 0) a[i] = v[i];

    for (int i = 0; i < v.size(); i++)         /// �������� ��� ������� ��������
        if (v[i] <= 0) b[i] = v[i];

    cout << "������ ������: ";
    for (int i = 0; i < a.size(); i++)         /// ��� ������, ������ ���� ������� '_'
    {
        if (a[i] == 0) cout << "_" << " ";
        else cout << a[i] << " ";
    }
    cout << '\n';

    cout << "������ ������: ";
    for (int i = 0; i < b.size(); i++)         /// ��� ������, ������ ���� ������� '_'
    {
        if (b[i] == 0) cout << "_" << " ";
        else cout << b[i] << " ";
    }

    ot(a, b);                                  /// �������� ������� ��� ��������� ��������������
}

void ot(vector<int> a, vector<int> b)
{
    if (a.size() == b.size())                 /// ���� ����� �������� ����������, �� ���������� ���������
    {
        vector<int> c(a.size());              /// ������ �������� ������

        for (int i = 0; i < c.size(); i++) c[i] = a[i];/// ������� ���������� ��� �������� �� ������� �������
        for (int i = 0; i < c.size(); i++)             /// ��� ��� �� � ��� � ���������� ( � ������)
        {
            if (c[i] == 0) c[i] = b[i];               /// ����� ���������� ���������� ����� �� ������� �������
        }

        cout << '\n' << "------------------------------------------------" << '\n';
        cout << "�������� ������: ";
        for (int i = 0; i < c.size(); i++)            /// ������� �������� ������
        {
            cout << c[i] << " ";
        }
    }
    else
    {
        cout << "������� ����� ������ �����" << '\n';
    }
}

int main()
{
    setlocale(LC_ALL, "RUS");
    vector<int> v(10);              /// ������ ������

    srand(time(nullptr)); /// ������������� ��� ��������� �����
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = (rand() % 20) - 10; /// ��������� ���������� ������� �� 0 �� 10
    }

    cout << "�������� ������: ";        /// ������� ��� �� �����, ����� ����� �������� � ������������ �������
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << '\n' << "------------------------------------------------" << '\n';

    to(v);

}
