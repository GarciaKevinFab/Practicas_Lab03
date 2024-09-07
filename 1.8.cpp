#include <iostream>
using namespace std;

void procesar(int *&A, int *&B, int *&R);

int main()
{
    int *A = new int[7];
    int *B = new int[7];
    int *R = new int[7];

    procesar(A, B, R);

    delete[] A;
    delete[] B;
    delete[] R;

    return 0;
}

void procesar(int *&A, int *&B, int *&R)
{
    int valor = 100;

    for (int i = 0; i < 7; i++)
    {
        A[i] = valor;
        valor += 2;
    }

    for (int i = 0; i < 7; i++)
    {
        B[i] = A[6 - i];
    }

    cout << "\nVector A -> | ";
    for (int i = 0; i < 7; i++)
    {
        cout << A[i] << " | ";
    }

    cout << "\nVector B (Decreciente) -> | ";
    for (int i = 0; i < 7; i++)
    {
        cout << B[i] << " | ";
    }

    for (int i = 0; i < 7; i++)
    {
        R[i] = A[i] - B[i];
    }

    cout << "\nVector R (A - B) -> | ";
    for (int i = 0; i < 7; i++)
    {
        cout << R[i] << " | ";
    }
}
