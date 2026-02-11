#include<iostream>
using namespace std;
class Complex{
    int real,img;
public:
    Complex(int r,int i);
    void getComplex();
    Complex addComplex(Complex c2);
};
Complex::Complex(int r,int i){
    real=r;
    img=i;
}
void Complex::getComplex(){
    cout<<"real="<<real<<endl;
    cout<<"img="<<img<<endl;
}
Complex Complex::addComplex(Complex c2){
    Complex ans(0,0);
    ans.real=real+c2.real;
    ans.img=img+c2.img;
    return ans;
}
main(){
    Complex c1(2,5);
    Complex c2(6,8);
    c1.getComplex();
    c2.getComplex();
    Complex c3=c1.addComplex(c2);
    c3.getComplex();
}
