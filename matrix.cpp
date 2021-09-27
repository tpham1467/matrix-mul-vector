#include<iostream>
#include"matrix.h"
using namespace std;
matrix::matrix(int row,int col,int k)
{
    this->row=row;
    this->col=col;
    this->p=new int*[this->row];
    for(int i=0;i<this->row;i++) 
    {
        *(this->p+i)=new int[this->col];
        for(int j=0;j<this->col;j++) *(*(this->p+i)+j)=k;
    }
}

matrix::~matrix()
{   

    for(int i=0;i<this->row;i++) 
    delete[] *(this->p+i);
    delete[] p;
 
}
void matrix::show(){
    for(int i=0;i<this->row;i++) 
    {
          for(int j=0;j<this->col;j++)
          {
              cout<<*(*(this->p+i)+j)<<" ";
          }     
          cout<<endl;
    }
    cout<<endl;
}
void matrix::nhap()
{   this->p=new int*[this->col];
    for(int i=0;i<this->row;i++) 
    {     *(this->p+i)=new int[this->col];
          for(int j=0;j<this->col;j++)
          {
              cin>>*(*(this->p+i)+j);
          }     
    }
}
int matrix::get_element( int i,int j)
{
    return *(*(this->p+i)+j);
 
}
int matrix::get_row()
{
    return this->row;
}
int matrix::get_col()
{
    return this->col;
}
void matrix::set_row()
{
    cout<<"nhap so hang: ";
    cin>>this->row;
    cout<<endl;
}
void matrix::set_col()
{
    cout<<"nhap so cot: ";
    cin>>this->col;
    cout<<endl;
}