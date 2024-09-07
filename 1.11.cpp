#include <iostream>
using namespace std;

void procesar(int *&A, int *&B, int *&C, int *&D, int *&R);

int main()
{
    int *A = new int[10];
    int *B = new int[10];
    int *C = new int[10];
    int *D = new int[10];
    int *R = new int[4];

    procesar(A, B, C, D, R);

    delete[] A;
    delete[] B;
    delete[] C;
    delete[] D;
    delete[] R;

    return 0;
}

void procesar(int *&A, int *&B, int *&C, int *&D, int *&R)
{
    int suma_A = 0, suma_B = 0, suma_C = 0, suma_D = 0;

    for (int i = 0; i < 10; i++)
    {
        A[i] = (i + 1) * 2;
        B[i] = (i + 1) * 2 - 1;
        C[i] = A[i] + B[i];
        D[i] = A[i] - B[i];
        suma_A += A[i];
        suma_B += B[i];
        suma_C += C[i];
        suma_D += D[i];
    }

    R[0] = suma_A;
    R[1] = suma_B;
    R[2] = suma_C;
    R[3] = suma_D;

    cout << "\nVector R (sumas de A, B, C, D) -> | ";
    for (int i = 0; i < 4; i++)
    {
        cout << R[i] << " | ";
    }
    cout << endl;
}
