#include <iostream>

using namespace std;

int main()
{
    float valor_Produto;
    cin >> valor_Produto;
    int codigo;
    cin >> codigo;
    if (valor_Produto <= 30)
    {
        cout << valor_Produto * 0 << endl;
        cout << valor_Produto * 1 << endl;
    }
    else if (valor_Produto > 30 && valor_Produto <= 100)
    {
        cout << valor_Produto * 0.10f << endl;
        cout << valor_Produto * 0.90f << endl;
    }
    else
    {
        cout << valor_Produto * 0.15f << endl;
        cout << valor_Produto * 0.85f << endl;
    }
    return 0;
}
