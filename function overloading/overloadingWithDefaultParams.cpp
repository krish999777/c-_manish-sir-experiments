#include<iostream>
using namespace std;
class Shapes{
public:
    float area(float radius);
    float area(float l,float b=0.5);
    float area(int b,float h);
};
float Shapes::area(float radius){
    return (3.14*radius*radius);
}
float Shapes::area(float l,float b){
    return (l*b);
}
float Shapes::area(int b,float h){
    return(0.5*b*h);
}
main(){
    Shapes s;
    float r;
    cout<<"enter radius for circle"<<endl;
    cin>>r;
    float areac=s.area(r);
    cout<<"area of circle="<<areac<<endl;
    float l,b;
    cout<<"enter length and breadth for rectangle"<<endl;
    cin>>l>>b;
    float arear=s.area(l,b);
    cout<<"area of rectangle="<<arear<<endl;
    float br;
    int h;
    cout<<"enter height and base for traingle"<<endl;
    cin>>h>>br;
    float areat=s.area(h,br);
    cout<<"area of trinagle="<<areat<<endl;

}
