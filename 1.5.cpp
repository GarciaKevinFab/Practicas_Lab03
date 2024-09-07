#include <iostream>
using namespace std;

void procesar(int *&A, int *&B, int *&C);

int main()
{
    int *A = new int[5];
    int *B = new int[5];
    int *C = new int[5];

    procesar(A, B, C);

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}

void procesar(int *&A, int *&B, int *&C)
{
    float promedio = 0;

    cout << "Ingrese los elementos del Vector A:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "\nIngrese los elementos del Vector B:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "B[" << i << "]: ";
        cin >> B[i];
    }

    cout << "\nVector C (A - B) -> | ";
    for (int i = 0; i < 5; i++)
    {
        C[i] = A[i] - B[i];
        cout << C[i] << " | ";
        promedio += C[i];
    }

    promedio /= 5;
    cout << "\n\nEl promedio de los elementos del Vector C es: " << promedio << endl;
}
