#include <iostream>
using namespace std;

void procesar(int *&vec);

int main()
{
    int *A = new int[5];
    procesar(A);
    delete[] A;
    return 0;
}

void procesar(int *&vec)
{
    int *menor = new int;
    int *mayor = new int;
    *menor = 0;
    *mayor = -1000;

    for (int i = 0; i < 5; i++)
    {
        do
        {
            cout << "A[" << i << "] Ingrese dato (par negativo): ";
            cin >> vec[i];
            if (vec[i] >= 0 || vec[i] % 2 != 0)
                cout << "Error... ";
        } while (vec[i] >= 0 || vec[i] % 2 != 0);

        if (vec[i] < *menor)
            *menor = vec[i];
        if (vec[i] > *mayor)
            *mayor = vec[i];
    }

    cout << "Vector -> | ";
    for (int i = 0; i < 5; i++)
    {
        cout << vec[i] << " | ";
    }
    cout << "\nMayor: " << *mayor;
    cout << "\nMenor: " << *menor;

    delete menor;
    delete mayor;
    return;
}
