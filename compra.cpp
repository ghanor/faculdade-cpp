#include <iostream>

using namespace std;

int main()
{
    unsigned int codigo;
    float quantidade;
    cin >> codigo >> quantidade;
    float valor_Bruto, valor_Desconto, preco_Final;
    if (codigo <= 10)
    {
        valor_Bruto = 10.00f * quantidade;
            if (valor_Bruto < 250)
            {
                valor_Desconto = valor_Bruto * 0.05f;
                float preco_Unitario;
                preco_Unitario = 10.00f;
                preco_Final = valor_Bruto * 0.95f;
                cout << preco_Unitario << endl << valor_Bruto << endl
                     << valor_Desconto << endl << preco_Final << endl;
            }
            else if (valor_Bruto >= 250 and valor_Bruto < 500)
            {
                valor_Desconto = valor_Bruto * 0.10f;
                float preco_Unitario;
                preco_Unitario = 10.00f;
                preco_Final = valor_Bruto * 0.90f;
                cout << preco_Unitario << endl << valor_Bruto << endl
                     << valor_Desconto << endl <<preco_Final << endl;
            }
            else
            {
                valor_Desconto = valor_Bruto * 0.15f;
                float preco_Unitario;
                preco_Unitario = 10.00f;
                preco_Final = valor_Bruto * 0.85f;
                cout << preco_Unitario << endl << valor_Bruto << endl
                     << valor_Desconto << endl << preco_Final << endl;
            }
    }
    else if (codigo >= 11 and codigo <= 20)
    {
        valor_Bruto = 15.00f * quantidade;
            if (valor_Bruto < 250)
            {
                valor_Desconto = valor_Bruto * 0.05f;
                float preco_Unitario;
                preco_Unitario = 15.00f;
                preco_Final = valor_Bruto * 0.95f;
                cout << preco_Unitario << endl << valor_Bruto << endl
                     << valor_Desconto << endl << preco_Final << endl;
            }
            else if (valor_Bruto >= 250 and valor_Bruto < 500)
            {
                valor_Desconto = valor_Bruto * 0.10f;
                float preco_Unitario;
                preco_Unitario = 15.00f;
                preco_Final = valor_Bruto * 0.90f;
                cout << preco_Unitario << endl << valor_Bruto << endl
                     << valor_Desconto << endl << preco_Final << endl;
            }
            else
            {
                valor_Desconto = valor_Bruto * 0.15f;
                float preco_Unitario;
                preco_Unitario = 15.00f;
                preco_Final = valor_Bruto * 0.85f;
                cout << preco_Unitario << endl << valor_Bruto << endl
                     << valor_Desconto << endl << preco_Final << endl;
            }
    }
    else if (codigo >= 21 and codigo <= 30)
    {
        valor_Bruto = 20.00f * quantidade;
            if (valor_Bruto < 250)
            {
                valor_Desconto = valor_Bruto * 0.05f;
                float preco_Unitario;
                preco_Unitario = 20.00f;
                preco_Final = valor_Bruto * 0.95f;
                cout << preco_Unitario << endl << valor_Bruto << endl
                     << valor_Desconto << endl << preco_Final << endl;
            }
            else if (valor_Bruto >= 250 and valor_Bruto <= 500)
            {
                valor_Desconto = valor_Bruto * 0.10f;
                float preco_Unitario;
                preco_Unitario = 20.00f;
                preco_Final = valor_Bruto * 0.90f;
                cout << preco_Unitario << endl << valor_Bruto << endl
                     << valor_Desconto << endl << preco_Final << endl;
            }
            else
            {
                valor_Desconto = valor_Bruto * 0.15f;
                float preco_Unitario;
                preco_Unitario = 20.00f;
                preco_Final = valor_Bruto * 0.85f;
                cout << preco_Unitario << endl << valor_Bruto << endl
                     << valor_Desconto << endl << preco_Final << endl;
            }
    }
    else
    {
        valor_Bruto = 30.00f * quantidade;
            if (valor_Bruto < 250)
            {
                valor_Desconto = valor_Bruto * 0.05f;
                float preco_Unitario;
                preco_Unitario = 30.00f;
                preco_Final = valor_Bruto * 0.95f;
                cout << preco_Unitario << endl << valor_Bruto << endl
                     << valor_Desconto << endl << preco_Final << endl;
            }
            else if (valor_Bruto >= 250 and valor_Bruto < 500)
            {
                valor_Desconto = valor_Bruto * 0.10f;
                float preco_Unitario;
                preco_Unitario = 30.00f;
                preco_Final = valor_Bruto * 0.90f;
                cout << preco_Unitario << endl << valor_Bruto << endl
                     << valor_Desconto << endl << preco_Final << endl;
            }
            else
            {
                valor_Desconto = valor_Bruto * 0.15f;
                float preco_Unitario;
                preco_Unitario = 30.00f;
                preco_Final = valor_Bruto * 0.85f;
                cout << preco_Unitario << endl << valor_Bruto << endl
                     << valor_Desconto << endl << preco_Final << endl;
            }
    }
    return 0;
}
