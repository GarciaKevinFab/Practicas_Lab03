#include <iostream>
using namespace std;

void procesar(int *&A, int *&C);

int main()
{
    int *A = new int[5];
    int *B = new int[5];
    int *C = new int[5];

    procesar(A, C);

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}

void procesar(int *&A, int *&C)
{
    int mult_impar_A = 1, mult_impar_C = 1;

    cout << "Ingrese los elementos del Vector A:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "A[" << i << "]: ";
        cin >> A[i];
        if (i % 2 != 0)
        {
            mult_impar_A *= A[i];
        }
    }

    cout << "\nIngrese los elementos del Vector C:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "C[" << i << "]: ";
        cin >> C[i];
        if (i % 2 != 0)
        {
            mult_impar_C *= C[i];
        }
    }

    cout << "\nMultiplicación de posiciones impares del Vector A: " << mult_impar_A << endl;
    cout << "Multiplicación de posiciones impares del Vector C: " << mult_impar_C << endl;

    if (mult_impar_A > mult_impar_C)
    {
        cout << "El valor de la multiplicación en A es mayor." << endl;
    }
    else if (mult_impar_C > mult_impar_A)
    {
        cout << "El valor de la multiplicación en C es mayor." << endl;
    }
    else
    {
        cout << "Ambos valores son iguales." << endl;
    }
}
