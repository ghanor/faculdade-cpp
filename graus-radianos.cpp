#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char tipo;
    cin >> tipo;
    
    if (tipo == 's')
    {
        char tipo2;
        cin >> tipo2;
        if (tipo2 == 'g')
        {
            float calcular_Seno, valor;
            cin >> valor;
            calcular_Seno = sin(valor * float(M_PI) / 180.0f);
            cout << calcular_Seno << endl;
        }
        else 
        {
            float calcular_Seno, valor;
            cin >> valor;
            calcular_Seno = asin(valor);
            cout << calcular_Seno << endl;
        }
    }
    else
    {
        char tipo2;
        cin >> tipo2;
        if(tipo2 == 'g')
        {
            float calcular_Cosseno, valor;
            cin >> valor;
            calcular_Cosseno = acos(valor * float(M_PI) / 180.0f);
            cout << calcular_Cosseno << endl;
        }
        else 
        {
            float calcular_Cosseno, valor;
            cin >> valor;
            calcular_Cosseno = cos(valor);
            cout << calcular_Cosseno << endl;
        }
    }
    return 0;
    
}


