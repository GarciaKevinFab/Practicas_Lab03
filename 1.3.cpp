#include <iostream>
using namespace std;

void llenarParesImpares(int *&v);
void imprimirVector(int *&v, int size);

int main()
{
    int *vector = new int[10];
    llenarParesImpares(vector);
    imprimirVector(vector, 10);
    delete[] vector;
    return 0;
}

void llenarParesImpares(int *&v)
{
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            v[i] = (i + 2);
        }
        else
        {
            v[i] = (i + 2) - 1;
        }
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
