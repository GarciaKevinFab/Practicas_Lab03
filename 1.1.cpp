#include <iostream>
using namespace std;

void llenarPares(int *&v);
void imprimirVector(int *&v, int size);

int main()
{
    int *vector = new int[10];
    llenarPares(vector);
    imprimirVector(vector, 10);
    delete[] vector;
    return 0;
}

void llenarPares(int *&v)
{
    for (int i = 0; i < 10; i++)
    {
        v[i] = (i + 1) * 2;
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
