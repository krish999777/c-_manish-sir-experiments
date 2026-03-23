#include<iostream>
using namespace std;
class N{
protected:
    int n;
public:
    void set_n(){
        cout<<"Enter n"<<endl;
        cin>> n;
    }
};
class M{
protected:
    int m;
public:
    void set_m(){
        cout<<"Enter m"<<endl;
        cin>> m;
    }
};
class P:public M,public N{
public:
    void display(){
        cout<<"m="<<m<<" and n="<<n<<endl;
    }
};
int main(){
    P p;
    p.set_m();
    p.set_n();
    p.display();
}
