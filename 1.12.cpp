#include <iostream>
using namespace std;

void calcularPR(int *&PR, int n);

int main()
{
    int n = 100;
    int *PR = new int[n];

    calcularPR(PR, n);

    delete[] PR;
    return 0;
}

void calcularPR(int *&PR, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (i + 1) * 2.0 / ((i + 1) * 4.0);
        PR[i] = sum;
    }

    cout << "\nVector PR -> | ";
    for (int i = 0; i < n; i++)
    {
        cout << PR[i] << " | ";
    }
    cout << endl;
}
