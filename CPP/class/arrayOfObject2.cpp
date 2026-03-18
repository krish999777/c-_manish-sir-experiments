#include<iostream>
#include<string.h>
using namespace std;
class product{
    int code,qty;
    char name[15];
    float price;
public:
    void get_data();
    void put_data();
    float valuation();

};
void product::get_data(){
    cout<<"enter code qty name and price"<<endl;
    cin>>code>>qty>>name>>price;
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
    int n;
    float total=0;
    cout<<"enter number of objects"<<endl;
    cin>>n;
    product obj[n];
    cout<<"enter the data for products"<<endl;
    for(int i=0;i<n;i++){
        obj[i].get_data();
    }
    cout<<"This is the data for products"<<endl;
    for(int i=0;i<n;i++){
        obj[i].put_data();
    }
    cout<<"This is the valuation for products"<<endl;
    for(int i=0;i<n;i++){
        float val=obj[i].valuation();
        total+=val;
        cout<<"valuation="<<val<<endl;
    }
    cout<<"total valuation="<<total<<endl;
}
