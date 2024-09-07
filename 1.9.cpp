#include <iostream>
using namespace std;

void procesar(int *&A, int *&B, int *&C);

int main()
{
    int *A = new int[9];
    int *B = new int[9];
    int *C = new int[9];

    procesar(A, B, C);

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}

void procesar(int *&A, int *&B, int *&C)
{
    float suma_A = 0, suma_B = 0, promedio_A, promedio_B;

    cout << "Ingrese los elementos del Vector A (pares):" << endl;
    for (int i = 0; i < 9; i++)
    {
        do
        {
            cout << "A[" << i << "]: ";
            cin >> A[i];
            if (A[i] % 2 != 0)
            {
                cout << "Error, debe ingresar un número par." << endl;
            }
        } while (A[i] % 2 != 0);
        suma_A += A[i];
    }

    cout << "\nIngrese los elementos del Vector B (impares):" << endl;
    for (int i = 0; i < 9; i++)
    {
        do
        {
            cout << "B[" << i << "]: ";
            cin >> B[i];
            if (B[i] % 2 == 0)
            {
                cout << "Error, debe ingresar un número impar." << endl;
            }
        } while (B[i] % 2 == 0);
        suma_B += B[i];
    }

    promedio_A = suma_A / 9;
    promedio_B = suma_B / 9;

    for (int i = 0; i < 9; i++)
    {
        C[i] = 3 * A[i] + 2 * B[i];
    }

    cout << "\nVector C (3A + 2B) en forma descendente -> | ";
    for (int i = 8; i >= 0; i--)
    {
        cout << C[i] << " | ";
    }

    cout << "\n\nPromedio del Vector A: " << promedio_A << endl;
    cout << "Promedio del Vector B: " << promedio_B << endl;
}
