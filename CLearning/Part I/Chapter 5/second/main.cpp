#include <iostream>
using namespace std;

const double ABSOLUTE_ZERO = -273.15;

enum Errors{
    INCORRECT_DATA = 0,
    INCORRECT_INPUT = 1,
};

double ktoc(double k)
{
    double c = k - 273.15;
    return c;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    double c = 0, k = 0;

    try
    {
        cout << "������� ����������� � K: ";
        cin >> k;
        if(cin)
        {
            if(k >= ABSOLUTE_ZERO)
            {
                c = ktoc(k);
                cout << c << " �������" << '\n';
            } else throw INCORRECT_DATA;
        }
        else throw INCORRECT_INPUT;
    }
    catch(Errors code)
    {
        switch(code)
        {
        case 0: cerr << "�� �� ������ ������ ����������� ���� ����������� ����" << '\n'; break;
        case 1: cerr << "������ ����� ������" << '\n'; break;
        default: cerr << "������" << '\n';
        }
        return code;
    }
}
