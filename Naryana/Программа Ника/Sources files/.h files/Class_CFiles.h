#ifndef CLASS_CFILES_H_INCLUDED
#define CLASS_CFILES_H_INCLUDED

#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

class CFiles///����� ��� ������ � ������
{
public:
    char file_creaate[20];///���������� ��� �����
    char file_delete[20];///���������� ��� �����
    char file_edit[20];///���������� ��� �����
    char command[20];///���������� ��� �����
///�������
///========================================================
    void Create_file();///�������� ����� � ����� ��� ����
    void Edit_file();///�������������� �����
    void View_file();///������� ��� ������ ������
    int View_DB();///������� ��� ������ ���� ������
    void Delete_file();///�������� �����
    void loading();///������� ��� �������� ��������
///=========================================================
};

#endif
