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
int main(){
    Student s;
    s.setStudent();
    s.getStudent();
    int total=s.totalMarks();
    cout<<"Total="<<total<<endl;
}
