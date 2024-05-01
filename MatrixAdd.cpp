#include <iostream>
using namespace std;
class MatrixAdd
{
    int i, j, r, c, p, q, a[10][10], b[10][10], sum[10][10],d[10][10];

public:
    void check(void);
    void accept(int, int, int, int);
    void add(int, int);
    void display(int d[][10]);
};

void MatrixAdd::check()
{
    cout << "Enter the number of rows of the first matrix" << endl;
    cin >> r;
    cout << "Enter the number of column of the first matrix" << endl;
    cin >> c;
    cout << "Enter the number of rows of the second matrix" << endl;
    cin >> p;
    cout << "Enter the number of column of the second matrix" << endl;
    cin >> q;
    if (r != p || c != q)
    {
        cout << "Number of rows and column must be same" << endl;
        exit(0);
    }
    else
    {
        accept(r, c, p, q);
    }
}
void MatrixAdd::accept(int, int, int, int)
{
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter the element of the " << i + 1 << "-" << j + 1 << " cell of the first matrix" << endl;
            cin >> a[i][j];
        }
    }
    display(a);
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            cout << "Enter the element of the " << i + 1 << "-" << j + 1 << " cell  of the second matrix" << endl;
            cin >> b[i][j];
        }
    }
    display(b);

    add(a[i][j], b[i][j]);
}

void MatrixAdd::add(int, int)
{
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    display(sum);
}
void MatrixAdd::display(int d[][10])
{
    cout << "The sum of the matrix is" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << d[i][j] << "  ";
        }
        cout << endl;
    }
}

int main()
{
    MatrixAdd mat;
    mat.check();
    return 0;
}
