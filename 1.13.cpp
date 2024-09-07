#include <iostream>
using namespace std;

void calcularVectores(int *&PR, int *&IM, int n);

int main()
{
    int n = 100;
    int *PR = new int[n];
    int *IM = new int[n];

    calcularVectores(PR, IM, n);

    delete[] PR;
    delete[] IM;
    return 0;
}

void calcularVectores(int *&PR, int *&IM, int n)
{
    char continuar;
    int contador = 0;

    do
    {
        PR[contador] = (contador + 1) * 2;
        IM[contador] = (contador + 1) * 2 + 1;
        contador++;

        cout << "Desea generar un nuevo elemento? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' && contador < n);

    cout << "\nVector PR -> | ";
    for (int i = 0; i < contador; i++)
    {
        cout << PR[i] << " | ";
    }

    cout << "\nVector IM -> | ";
    for (int i = 0; i < contador; i++)
    {
        cout << IM[i] << " | ";
    }
    cout << endl;
}
