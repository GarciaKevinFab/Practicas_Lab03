#include <iostream>
using namespace std;

void procesar(int *&A, int *&B, int *&C, int *&D);

int main()
{
    int *A = new int[4];
    int *B = new int[4];
    int *C = new int[4];
    int *D = new int[4];

    procesar(A, B, C, D);

    delete[] A;
    delete[] B;
    delete[] C;
    delete[] D;

    return 0;
}

void procesar(int *&A, int *&B, int *&C, int *&D)
{
    cout << "Ingrese los elementos del Vector A:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "\nIngrese los elementos del Vector B:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "B[" << i << "]: ";
        cin >> B[i];
    }

    cout << "\nIngrese los elementos del Vector C:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "C[" << i << "]: ";
        cin >> C[i];
        D[i] = A[i] + B[i] + C[i];
    }

    D[3] += 10;
    A[0] += 7;
    B[0] += 7;

    cout << "\nVector D (Suma de A, B y C) -> | ";
    for (int i = 0; i < 4; i++)
    {
        cout << D[i] << " | ";
    }

    cout << "\nMayor en la posición 0 entre A y B: ";
    if (A[0] > B[0])
    {
        cout << A[0] << endl;
    }
    else
    {
        cout << B[0] << endl;
    }
}
