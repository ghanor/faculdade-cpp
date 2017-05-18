#include <iostream>

using namespace std;

int main()
{
    float valor_Carro;
    cin >> valor_Carro;
    if (valor_Carro <= 20000)
    {
        float valor_Final1;
        valor_Final1 = valor_Carro * 1.05f;
        cout << valor_Final1  << endl;
    }
    else if (valor_Carro > 20000 && valor_Carro <=40000)
    {
        float valor_Final2;
        valor_Final2 = (valor_Carro * 1.10f) * 1.30f;
        cout << valor_Final2 << endl;
    }
    else  
    {
        float valor_Final3;
        valor_Final3 = (valor_Carro * 1.15f) * 1.45f;
        cout << valor_Final3 << endl;
    }
    return 0;
}
