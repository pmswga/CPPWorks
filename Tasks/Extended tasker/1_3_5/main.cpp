/*� ���������� �������� n �����, ����� ����������� �� ���.*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, last_number = 0, min_number = 0;

    while(true)
    {
        cin >> input;

        if(input < last_number) min_number = input;
        last_number = input;

        cout << "����������� �����: " << min_number << '\n';
    }
}
