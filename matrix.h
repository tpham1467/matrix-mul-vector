
class vector;
class matrix
{
private:
    int **p;
    int row;
    int col;
public:
    matrix(int=2,int=3,int=1);
    ~matrix();
    void show();
    void nhap();
    int get_element(int,int);
    int get_row();
    int get_col();
    void set_row();
    void set_col();
    friend void matrix_mul_vector(const vector&,const matrix&);
};

