#include <iostream>
using namespace std;

void llenarImpares(int *&v);
void imprimirVector(int *&v, int size);

int main()
{
    int *vector = new int[10];
    llenarImpares(vector);
    imprimirVector(vector, 10);
    delete[] vector;
    return 0;
}

void llenarImpares(int *&v)
{
    for (int i = 0; i < 10; i++)
    {
        v[i] = (i * 2) + 1;
    }
}

void imprimirVector(int *&v, int size)
{
    cout << "Vector -> | ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " | ";
    }
    cout << endl;
}
