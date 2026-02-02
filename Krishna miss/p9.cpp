#include<iostream>
using namespace std;
main(){
    int roll,marks;
    char name[50];
    cout<<"enter name roll no and marks";
    cin>>name>>roll>>marks;
    if(marks<=100&&marks>80){
        cout<<"Excellent";
    }
    else if(marks<80&&marks>=70){
        cout<<"Distinction";
    }
    else if(marks<70&&marks>=60){
        cout<<"First class";
    }
    else if(marks<60&&marks>=50){
        cout<<"second class";
    }
    else if(marks<50&&marks>=40){
        cout<<"pass";
    }
    else{
        cout<<"fail";
    }

}
