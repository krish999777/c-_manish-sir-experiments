#include<iostream>
using namespace std;
main(){
    int num;
    cout<<"enter number to check whether it is positve netgetive or zero"<<endl;
    cin>>num;
    if(num>0){
        cout<<"number is positive";
    }
    else if(num<0){
        cout<<"number is negetive";
    }
    else{
        cout<<"number is zero";
    }
}
