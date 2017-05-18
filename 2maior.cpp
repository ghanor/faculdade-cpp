#include <iostream>

using namespace std;

int main()
{
    float num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;
    if (num1 >= num2 && num2 >= num3 && num2 >= num4)
    {
        cout << num1 << endl << num2 << endl;
    }
    else if (num2 >= num1 && num1 >= num3 && num1 >= num4)
    {
        cout << num2 << endl << num1 << endl;
    }
    else if (num3 >= num4)
    {
        cout << num3 << endl << num4 << endl;
    }
    else
        cout << num4 << endl << num3 << endl;
}
