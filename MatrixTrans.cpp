#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class MatrixTrans
{
    int i, j, r, c, a[10][10], b[10][10];

public:
    void accept(void);
    void trans(int);
    void display(int d[][10]);
};

void MatrixTrans::accept()
{
    cout << "Enter the number of rows of the first matrix" << endl;
    cin >> r;
    cout << "Enter the number of column of the first matrix" << endl;
    cin >> c;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter the element of the " << i + 1 << "-" << j + 1 << " cell of the matrix" << endl;
            cin >> a[i][j];
        }
    }
    display(a);
    trans(a[i][j]);
}

void MatrixTrans::trans(int)
{
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    cout<<"The transpose of the matrix is"<<endl;
    display(b);
}
void MatrixTrans::display(int d[][10])
{
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
    MatrixTrans mat;
    mat.accept();
    return 0;
}
