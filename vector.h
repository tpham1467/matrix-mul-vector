class matrix;
class vector
{
private:
    int *p;
    int n;
public:
    vector(int=2,int=1);
    ~vector();
    void show();
    void Nhap();
    int get_element(int);
    void set_element(int,int);
    void set_n();
    int get_n();
     friend void matrix_mul_vector(const vector&,const matrix&);
};
