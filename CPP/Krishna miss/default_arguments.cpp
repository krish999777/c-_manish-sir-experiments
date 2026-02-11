#include<iostream>
using namespace std;
float simple_int(int p,int n,float r=0.15);
float simple_int(int p,int n,float r){
    return p*n*r;
}
main(){
    int p,n;
    float r;
    cout<<"enter p,n,r";
    cin>>p>>n>>r;
    printf("%f",simple_int(p,n,r));
    printf("%f",simple_int(p,n));
}
