#ifndef BAT_H_INCLUDED
#define BAT_H_INCLUDED

#include "Lib.h"
#include "Objects.h"
using namespace std;

void Battle(AI men, Player Ser)
{
    system("cls");
    for(int i = 10; i<100; i=i+10)
    {
        cout << "�������� " << i << '%' << '\n';
        Sleep(500);
        system("cls");
    }
    system("cls");
    cout << "��� ����: ";
    srand(time(0));
    int i = rand() % 3;
    if(i == 0)
    {
        cout << "����" << '\n';
        men.HP = 60;
        men.Mana = 20;
    }
    if(i == 1)
    {
        cout << "�������" << '\n';
        men.HP = 45;
        men.Mana = 0;
    }
    if(i == 2)
    {
        cout << "���" << '\n';
        men.HP = 40;
        men.Mana = 50;
    }
    system("cls");
    for(int n=3; n!=0; n--)
    {
        cout << "����� ������� ����� " << n;
        Sleep(1000);
        system("cls");
    }
    while(Ser.HP > 0 or men.HP > 0)
    {
        cout << "�������� ���������� " << men.HP <<  '\n';
        cout << "���� " << men.Mana << '\n';
        cout << "=========================" << '\n';
        cout << "���� �������� " << Ser.Mana << '\n';
        cout << "���� " << Ser.Mana << '\n' << '\n';
        cout << "�������� ��������: " << '\n';
        cout << "1.�����" << '\n';
        cout << "2.�����" << '\n';
        cout << "3.���������� ���" << '\n' << '\n';
        cin >> in;
        if(in == 1)
        {

        }
        if(in == 2)
        {

        }
        if(in == 3)
        {

        }
    }
}



int Suppot_Battle(AI men, Player Ser)
{
mark:
    system("cls");
    cout << "��������� ���:" << '\n';
    cout << "1.��������� ������ � ���������" << '\n';
mark2:
    cout << "2.������ ������� ���������" << '\n' << '\n';
    cin >> in;
    system("cls");
    if(in == 1)
    {
        cout << "1.���" << '\n';
marl:
        cout << "2.�����" << '\n' << '\n';
        cin >> in;
        if(in == 1)
        {
            system("cls");
            cout << "������� ���: ";
            cin >> Ser.Name;
            system("cls");
            goto marl;
        }
        if(in == 2)
        {
            system("cls");
            cout << "������ ������������ ����������� ��������?" << '\n';
            cout << "1.��/2.���" << '\n' << '\n';
            cin >> in;
            system("cls");
            if(in == 2)
            {
                cout << "�������� �����: " << '\n';
                cout << "1.����" << '\n';
                cout << "2.�������" << '\n';
                cout << "3.���" << '\n' << '\n';
                cin >> in;
                if(in == 2)
                {
                    system("cls");
                    cout << "��������: ";
                    cin >> Ser.HP;
                }
                system("cls");
                cout << "��������: ";
                cin >> Ser.HP;
                cout << "����: ";
                cin >> Ser.Mana;
                system("cls");
                goto mark2;
            }
            if(in == 1)
            {
                cout << "�������� �����: " << '\n';
                cout << "1.����" << '\n';
                cout << "2.�������" << '\n';
                cout << "3.���" << '\n' << '\n';
                cin >> in;
                system("cls");
                if(in == 1)
                {
                    Ser.HP = 60;
                    Ser.Mana = 20;
                    cout << "�����: " <<Ser.HP << '\n';
                    cout << "����: " << Ser.Mana << '\n';
                    Sleep(5000);
                    system("cls");
                    goto mark2;
                }
                if(in == 2)
                {
                    Ser.HP = 45;
                    cout << "�����: " << Ser.HP << '\n';
                    Sleep(5000);
                    system("cls");
                    goto mark2;
                }
                if(in == 3)
                {
                    Ser.HP = 40;
                    Ser.Mana = 50;
                    cout << "�����: " << Ser.HP << '\n';
                    cout << "����: " << Ser.Mana << '\n';
                    Sleep(5000);
                    system("cls");
                    goto mark2;
                }
            }
        }
    }
    if(in == 2)
    {
        cout << "�������� ���: " << gamespeed << '\n';
        cout << "������������ ���������� �����: " << number_steps << '\n' << '\n';
        cout << "������ �������� ���������?" << '\n' << '\n';
        cout << "1.��/2.���" << '\n';
        cin >> in;
        system("cls");
        if(in == 1)
        {
            cout << "1.�������� ���: " << gamespeed << '\n';
mrs:
            cout << "2.������������ ���������� �����: " << number_steps << '\n' << '\n';
            cin >> in;
            if(in == 1)
            {
                system("cls");
ma:
                cout << "������� �������� ���� �� 100 �� 1000" << '\n';
                cin >> in;
                if(in > 100 and in < 1000)
                {
                    gamespeed = in;
                    system("cls");
                    goto mrs;
                }
                goto ma;
            }
            if(in == 2)
            {
                system("cls");
ma2:
                cout << "������� ���������� �����" << '\n';
                cin >> in;
                if(in > 0 and in < 1001)
                {
                    number_steps = in;
                    system("cls");
                    goto ma3;
                }
                goto ma2;
            }
        }
        if(in == 2)
        {
            goto ma3;
        }
    }
    system("cls");
ma3:
    cout << "1.������ ����" << '\n';
    cin >> in;
    if(in == 1) return in;
}



#endif
