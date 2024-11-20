
#include <iostream>
using namespace std;
#include <string>

int main()
{
    int Decimal;
    string Binary;

    cout << "Enter Decimal: ";
    cin >> Decimal;

    if (Decimal == 0)
    {
        Binary = "0";
    }
    
    else
    {
        while (Decimal > 0)
        {
            Binary = to_string(Decimal % 2) + Binary;
            Decimal /= 2;
        }
    }

    cout << "The Binary is: "<< Binary;
}

