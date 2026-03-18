#include<iostream>
using namespace std;
class Person{
    char name[15];
    int age;
public:
    void setPerson(){
        cout<<"Enter name and age"<<endl;
        cin>>name>>age;
    }
    void getPerson(){
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl;
    }
};
class Student:private Person{
    int id,m1,m2;
public:
    void setStudent(){
        setPerson();
        cout<<"Enter id, m1 , m2 "<<endl;
        cin>>id>>m1>>m2;
    }
    void getStudent(){
        getPerson();
        cout<<"id="<<id<<endl;
        cout<<"m1="<<m1<<endl;
        cout<<"m2="<<m2<<endl;
    }
    int totalMarks(){
        return m1+m2;
    }
};
class Faculty:private Person{
    int id,basic;
public:
    void setFaculty(){
        setPerson();
        cout<<"Enter id, basic salary"<<endl;
        cin>>id>>basic;
    }
    void getFaculty(){
        getPerson();
        cout<<"id="<<id<<endl;
        cout<<"Basic Salary="<<basic<<endl;
    }
    float grossSal(){
        float da=0.65*basic;
        float hra=0.5*basic;
        float ta=0.15*basic;
        return da+hra+ta+basic;
    }
};
int main(){
    Faculty f;
    f.setFaculty();
    f.getFaculty();
    float gsal=f.grossSal();
    cout<<"Gross Salary="<<gsal<<endl;
}
