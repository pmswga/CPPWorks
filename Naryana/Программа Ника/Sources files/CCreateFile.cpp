#include ".h files\Class_CCreateFile.h"

void CCreateFile::Create_readme()
{
    ofstream readme("Readme.txt");
    readme << "�� ����������� ����� Data, ����� ��������� ��������.\n";
    readme << "�� ������� ����� Data, ������ ��� ��� ��������� ������� �����, ������� ����� ��� ������ ���������.";
    readme.close();
}

void CCreateFile::Create_Floder_DB()
{
    system("MD DB");
}
