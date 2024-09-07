#include <iostream>
using namespace std;

void procesar(int *&A, int *&B, int *&C);

int main()
{
    int *A = new int[100];
    int *B = new int[100];
    int *C = new int[100];

    procesar(A, B, C);

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}

void procesar(int *&A, int *&B, int *&C)
{
    float suma_pares = 0, suma_impares = 0;
    int contador_pares = 0, contador_impares = 0;

    for (int i = 0; i < 100; i++)
    {
        cout << "Ingrese A[" << i << "]: ";
        cin >> A[i];
        if (i % 2 == 0)
        {
            suma_pares += A[i];
            contador_pares++;
        }
    }

    for (int i = 0; i < 100; i++)
    {
        cout << "Ingrese B[" << i << "]: ";
        cin >> B[i];
        if (i % 2 != 0)
        {
            suma_impares += B[i];
            contador_impares++;
        }
    }

    for (int i = 0; i < 100; i++)
    {
        C[i] = A[i] + B[i];
    }

    cout << "\nVector C (A + B) -> | ";
    for (int i = 0; i < 100; i++)
    {
        cout << C[i] << " | ";
    }

    cout << "\n\nPromedio de valores en posiciones pares del Vector A: " << (suma_pares / contador_pares) << endl;
    cout << "Promedio de valores en posiciones impares del Vector B: " << (suma_impares / contador_impares) << endl;
}
