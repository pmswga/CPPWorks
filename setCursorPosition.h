#include <windows.h>

// ������� ������������� ������ � ������� x,y
// ��� x - ����� �������
// y - ����� ������
// ��������� ����� � �������� ���� � 0
void setCursorPosition(int x, int y)
{
    COORD position = {x,y};
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
}