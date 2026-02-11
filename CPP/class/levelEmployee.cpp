#include<string.h>
#include<iostream>
using namespace std;
class Employee{
    int code;
    char name[15];
    int bs;
    int level;
public:
    void putEmp(int c,char n[15],int sal,int l);
    void getEmp();
    float grossSalary();
    float incomeTaxCalc();
    float netSal();
};
    void Employee::putEmp(int c,char n[15],int sal,int l){
        code=c;
        strcpy(name,n);
        bs=sal;
        level=l;
    }
    void Employee::getEmp(){
        cout<<"code="<<code<<endl;
        cout<<"name="<<name<<endl;
        cout<<"bs="<<bs<<endl;
        cout<<"level="<<level<<endl;
    }
    float Employee::grossSalary(){
        float hra=0.5*bs;
        float ca,ea;
        if(level==1){
            ca=1000;
            ea=500;
        }
        else if(level==2){
            ca=750;
            ea=200;
        }
        else if(level==3){
            ca=500;
            ea=100;
        }
        else{
            ca=250;
            ea=0;
        }
        float grossSal=bs+hra+ca+ea;
        return grossSal;
    }
    float Employee::incomeTaxCalc(){
        float gsal=grossSalary();
        float incomeTax;
        if(gsal<=2000){
            incomeTax=0;
        }
        else if(gsal>2000&&gsal<=4000){
            incomeTax=0.03*gsal;
        }
        else if(gsal>4000&&gsal<=5000){
            incomeTax=0.05*gsal;
        }
        else{
            incomeTax=0.08*gsal;
        }
        return incomeTax;
    }
    float Employee::netSal(){
        float it=incomeTaxCalc();
        float gsal=grossSalary();
        return gsal-it;
    }
    main(){
        Employee obj;
        cout<<"enter id,name,basic salary,level"<<endl;
        int id,bs,level;
        char name[15];
        cin>>id>>name>>bs>>level;
        obj.putEmp(id,name,bs,level);
        obj.getEmp();
        float grossSal=obj.grossSalary();
        cout<<"gross salary="<<grossSal<<endl;
        float incomeTax=obj.incomeTaxCalc();
        cout<<"income tax="<<incomeTax<<endl;
        float netSal=obj.netSal();
        cout<<"net Salary="<<netSal;
    }

