/*� ���������� �������� n �����, ����� �� �����.*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int input, sum = 0;

    while(true)
    {
        cin >> input;
        sum += input;

        cout << "����� ����� ����� " << sum << '\n';
    }
}
