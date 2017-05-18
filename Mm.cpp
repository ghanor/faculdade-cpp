#include <iostream>

using namespace std;

int main()
{
    char letra;
    cin >> letra;
    if (letra >= 'a' && letra <= 'z')
        cout << "MINUSCULA" << endl;
    else
        cout << "MAIUSCULA" << endl;
    
    return 0;
}
