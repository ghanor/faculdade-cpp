#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char seno, cosseno, graus, radianos;
    cin >> seno >> cosseno >> graus >> radianos;
    float valor;
    cin >> valor;
    if (seno == 's' && graus == 'g')
    {
        float calcular_Seno;
        calcular_Seno = sin(valor);
        cout << calcular_Seno << endl;
    }
    else if (seno == 's' && radianos == 'r')
    {
        float calcular_Seno;
        calcular_Seno = asin(valor);
        cout << calcular_Seno << endl;
    }
    else if (cosseno == 'c' && graus == 'g')
    {
        float calcular_Cosseno;
        calcular_Cosseno = cos(valor);
        cout << calcular_Cosseno << endl;
    }
    else
    {
        float calcular_Cosseno;
        calcular_Cosseno = acos(valor);
        cout << calcular_Cosseno << endl;
    }
    return 0;
    
}

