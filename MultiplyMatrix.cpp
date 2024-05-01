#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class MultiplyMatrix
{

    int i, j, k, l, m, r, c, p, q, a[10][10], b[10][10], product[10][10] = {0}, d[10][10];

public:
    void check(void);
    void accept(int, int, int, int);
    void multiply(int, int);
    void display(int d[][10], int l, int m);
};

void MultiplyMatrix::check()
{
    cout << "Enter the number of rows of the first matrix" << endl;
    cin >> r;
    cout << "Enter the number of column of the first matrix" << endl;
    cin >> c;
    cout << "Enter the number of rows of the second matrix" << endl;
    cin >> p;
    cout << "Enter the number of column of the second matrix" << endl;
    cin >> q;
    if (c != p)
    {
        cout << "Cannot be multiplied" << endl;
        exit(0);
    }
    else
    {
        accept(r, c, p, q);
    }
}

void MultiplyMatrix::accept(int, int, int, int)
{
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter the element of the " << i + 1 << "-" << j + 1 << " cell of the first matrix" << endl;
            cin >> a[i][j];
        }
    }
    display(a, r, c); // Send data to the dispaly-----------
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            cout << "Enter the element of the " << i + 1 << "-" << j + 1 << " cell  of the second matrix" << endl;
            cin >> b[i][j];
        }
    }
    display(b, p, q); // Send data to the dispaly-------------
    multiply(a[i][j], b[i][j]);
}
void MultiplyMatrix::multiply(int, int)
{
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < q; j++)
        {
            for (k = 0; k < c; k++)
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "The product of the matrix is" << endl;
    display(product, r, q);
}
void MultiplyMatrix::display(int d[][10], int l, int m)
{
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << d[i][j] << "  ";
        }
        cout << endl;
    }
}

int main()
{
    MultiplyMatrix mat;
    mat.check();
    return 0;
}