#include <iostream>

using namespace std;

int main()
{
    int dia1, mes1, ano1;
    cin >> dia1 >> mes1 >> ano1;
    int dia2, mes2, ano2;
    cin >> dia2 >> mes2 >> ano2;
    if (ano1 > ano2)
    {
        cout << dia1 << endl << mes1 << endl << ano1 << endl;
    }
    else if (ano2 > ano1)
    {
        cout << dia2 << endl << mes2 << endl << ano2 << endl;
    }
    else // se o ano for igual
    {
        if (mes1 > mes2)
        {
            cout << dia1 << endl << mes1 << endl << ano1 << endl;
        }
        else if (mes2 > mes1)
        {
            cout << dia2 << endl << mes2 << endl << ano2 << endl;
        }
        else // se o mes for igual
        {
            if (dia1 > dia2)
            {
                cout << dia1 << endl << mes1 << endl << ano1 << endl;
            }
            else if (dia2 > dia1)
            {
                cout << dia2 << endl << mes2 << endl << ano2 << endl;
            }
            else // se o dia for igual
            {
                cout << dia2 << endl << mes2 << endl << ano2 << endl;
            }
        } // fecha o else do mes
    } // fecha o else do ano
    return 0;
}
