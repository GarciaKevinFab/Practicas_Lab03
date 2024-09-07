#include <iostream>
using namespace std;

void procesar(int *&A, int *&B);

int main()
{
    int *A = new int[6];
    int *B = new int[6];

    procesar(A, B);

    delete[] A;
    delete[] B;

    return 0;
}

void procesar(int *&A, int *&B)
{
    float suma_A = 0, suma_B = 0, promedio_A, promedio_B;
    int elementos_A = 0, elementos_B = 0;

    cout << "Ingrese los elementos del Vector A:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "A[" << i << "]: ";
        cin >> A[i];
        suma_A += A[i];
    }
    promedio_A = suma_A / 6;
    for (int i = 0; i < 6; i++)
    {
        if (A[i] > promedio_A)
            elementos_A++;
    }

    cout << "\nIngrese los elementos del Vector B:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "B[" << i << "]: ";
        cin >> B[i];
        suma_B += B[i];
    }
    promedio_B = suma_B / 6;
    for (int i = 0; i < 6; i++)
    {
        if (B[i] > promedio_B)
            elementos_B++;
    }

    cout << "\nPromedio de A: " << promedio_A << " (Elementos por encima del promedio: " << elementos_A << ")" << endl;
    cout << "Promedio de B: " << promedio_B << " (Elementos por encima del promedio: " << elementos_B << ")" << endl;

    if (promedio_A > promedio_B)
    {
        cout << "El promedio de A es mayor." << endl;
    }
    else if (promedio_B > promedio_A)
    {
        cout << "El promedio de B es mayor." << endl;
    }
    else
    {
        cout << "Ambos promedios son iguales." << endl;
    }
}
