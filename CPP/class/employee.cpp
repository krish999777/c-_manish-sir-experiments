#include<string.h>
#include<iostream>
using namespace std;
class Employee{
    int code;
    char name[15];
    int bs;
public:
    void putEmp(int c,char n[15],int sal);
    void getEmp();
    float grossSalary();
};
    void Employee::putEmp(int c,char n[15],int sal){
        code=c;
        strcpy(name,n);
        bs=sal;
    }
    void Employee::getEmp(){
        cout<<"code="<<code<<endl;
        cout<<"name="<<name<<endl;
        cout<<"bs="<<bs<<endl;
    }
    float Employee::grossSalary(){
        float hra=0.5*bs;
        float da=0.95*bs;
        float ea=0.05*bs;
        float grossSal=hra+da+ea+bs;
        return grossSal;
    }
    main(){
        Employee obj;
        obj.putEmp(120,"Krish",1000);
        obj.getEmp();
        float grossSal=obj.grossSalary();
        cout<<"gross salary="<<grossSal;
    }
