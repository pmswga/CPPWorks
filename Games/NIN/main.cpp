#include "Lib.h"
#include "BAT.h"
#include "Objects.h"
using namespace std;

void Standard(AI men[])
{
    srand(time(0));

}

void Menu()
{
    system("cls");
    cout << "1.��� � ��" << '\n' << "2.�������� � ��" << '\n' << '\n';
}

int main()
{
    setlocale(LC_ALL,"RUS");
    AI men;
    Player Ser;
    system( "color 0F" );
    cout << "������������� �������� v1.0" << '\n';
    Sleep(3000);
mark:
    system("cls");
    cout << "1.����" << '\n' << '\n';
    cin >> in;
    if(in == 1)
    {
        Menu();
        cin >> in;
        if(in == 1)
        {
            Suppot_Battle(men,Ser);
            Battle(men,Ser);
        }
        if(in == 2)
        {
            system("cls");
            cout << "� ����������" << '\n';
            Sleep(50000);
        }
    }
    else goto mark;
}
