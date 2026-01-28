#include<iostream>
#include<string.h>
using namespace std;
class product{
    int code,qty;
    char name[15];
    float price;
public:
    void get_data(int c,char n[15],int q,float p);
    void put_data();
    float valuation();

};
void product::get_data(int c,char n[15],int q,float p){
    code=c;
    strcpy(name,n);
    qty=q;
    price=p;
}
void product::put_data(){
    cout<<"code="<<code<<endl;
    cout<<"quantity="<<qty<<endl;
    cout<<"name="<<name<<endl;
    cout<<"price="<<price<<endl;
}
float product::valuation(){
    float val;
    val=qty*price;
    return val;
}
main(){
    product obj;
    obj.get_data(1,"pencil",50,5);
    obj.put_data();
    float val=obj.valuation();
    cout<<"valuation"<<val;
}
