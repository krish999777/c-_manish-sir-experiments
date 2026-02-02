#include<iostream>
using namespace std;
float area(float radius){
    return (3.14*radius*radius);
}
float area(float l,float b){
    return (l*b);
}
float area(int b,float h){
    return(0.5*b*h);
}
main(){
    float r;
    cout<<"enter radius for circle"<<endl;
    cin>>r;
    float areac=area(r);
    cout<<"area of circle="<<areac<<endl;
    float l,b;
    cout<<"enter length and breadth for rectangle"<<endl;
    cin>>l>>b;
    float arear=area(l,b);
    cout<<"area of rectangle="<<arear<<endl;
    float br;
    int h;
    cout<<"enter height and base for traingle"<<endl;
    cin>>h>>br;
    float areat=area(h,br);
    cout<<"area of trinagle="<<areat<<endl;

}
