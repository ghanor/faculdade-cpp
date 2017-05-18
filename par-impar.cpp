#include <iostream>

using namespace std;

int main()
{
    int tipo_Investimento;
    cin >> tipo_Investimento;
    float valor_Investimento;
    cin >> valor_Investimento;
    if (tipo_Investimento == 1)
    {
        float rendimento1;
        rendimento1 = (valor_Investimento * 1.005f);
        cout << rendimento1 << endl;
    }
    else
    {
        float rendimento2;
        rendimento2 = (valor_Investimento * 1.03f) - 30;
        cout << rendimento2 << endl;
    }
    return 0;
}
