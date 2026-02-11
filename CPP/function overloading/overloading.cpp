#include<iostream>
using namespace std;
void display(int var){
    cout<<"int number="<<var<<endl;
}
void display(float var){
    cout<<"float number="<<var<<endl;
}
void display(int var1,float var2){
    cout<<"int number="<<var1;
    cout<<" and float number="<<var2<<endl;
}
inline void display(float var1,int var2){
    cout<<"float number="<<var1;
    cout<<" and int number="<<var2<<endl;
}
main(){
    int a=5;
    float b=5.5;
    display(a);
    display(b);
    display(a,b);
    display(b,a);
}
