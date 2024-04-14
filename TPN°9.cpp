#include <iostream>
#include <string>
using namespace std;
string InvertirTexto(string frase, int inicio, int final);
int main()
{
    string frase;
    int inicio, final;
    cout << "Ingresa la frase a invertir: ";
    getline(cin, frase);
    cout << "Ingrese inicio de la inversion: ";
    cin >> inicio;
    cout << "Ingrese final de la inversion: ";
    cin >> final;
    frase = InvertirTexto(frase, inicio, final);
    cout << "La frase invertida es: " << frase << endl;
    return 0;
}

string InvertirTexto(string frase, int inicio, int final)
{
	string invertida = frase;
    for (int i = inicio, j = final; i < j; i++, j--)
    {
        swap(invertida[i], invertida[j]);
    }
    return invertida;
}