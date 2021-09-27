#include"vector.h"
#include<iostream>

using namespace std;
vector::vector(int n,int k)
{   this->n=n;
    this->p=new int[this->n];
    for(int i=0;i<this->n;i++) *(this->p+i)=k;
}

vector::~vector()
{
    
    delete[] this->p;
}
void vector::show(){
    for(int i=0;i<this->n;i++) cout<<*(this->p+i)<<endl;
    cout<<endl;
}
void vector::Nhap()
{   this->p=new int[this->n];
    for(int i=0;i<this->n;i++) cin>>*(this->p+i);
}
int vector::get_element(int i)
{
    return *(this->p+i);
}
void vector::set_element(int i,int k)
{    
    *(this->p+i)=k;
}
int vector::get_n()
{
    return this->n;
}
void vector::set_n()
{  cout<<"nhap n: ";
   cin>>this->n;
   cout<<endl;
}
