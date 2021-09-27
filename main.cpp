#include "matrix.h"
#include "vector.h"
#include <iostream>
using namespace std;
void matrix_mul_vector(const vector &v, const matrix &m)
{
    vector v2(m.row, 0);
    int s;

    for (int i = 0; i < m.row; i++)
    {
        s = 0;
        for (int j = 0; j < v.n; j++)
        {
            s += *(v.p + j) * *(*(m.p + i) + j);
        }
        *(v2.p + i) = s;
    }
    v2.show();
    
}
void matrix_mul_vector1(vector v,matrix m)
{
    vector v1(m.get_row(), 0);
    int s;
    for (int i = 0; i < m.get_row(); i++)
    {
        s = 0;
        for (int j = 0; j < v.get_n(); j++)
        {
            s += v.get_element(j) * m.get_element(i, j);
        }
        v1.set_element(i, s);
    }

    v1.show();
}
int main()
{
    vector v;
    matrix m;
    v.set_n();
    cout << "nhap vector:" << endl;
    v.Nhap();
    cout << endl;
    m.set_row();
    m.set_col();
    cout << "nhap ma tran:" << endl;
    m.nhap();
    cout << endl;
    if (m.get_col() == v.get_n())
    {
        cout << "Ket qua phep nhan:" << endl;
        cout << "Ket qua phep nhan dung function friend:" << endl;
        matrix_mul_vector(v, m);
        cout << "Ket qua phep nhan dung get,set:" << endl;
        matrix_mul_vector1(v, m);
    }
    else
        cout << "khong Nhan duoc";
    return 0;
}