#include<string.h>
#include<iostream>
using namespace std;
class Student{
    int id;
    char name[15];
    int mark1,mark2;
public:
    void getStu(int i,char n[15],int m1,int m2);
    void putStu();
    int total();
};
    void Student::getStu(int i,char n[15],int m1,int m2){
        id=1;
        strcpy(name,n);
        mark1=m1;
        mark2=m2;
    }
    void Student::putStu(){
        cout<<"id="<<id<<endl;
        cout<<"name="<<name<<endl;
        cout<<"marks of subject 1="<<mark1<<endl;
        cout<<"marks of subject 2="<<mark2<<endl;
    }
    int Student::total(){
        return (mark1+mark2);
    }
    main(){
        Student obj;
        cout<<"enter id,name,marks of subject 1 and subject 2"<<endl;
        int id,m1,m2;
        char name[15];
        cin>>id>>name>>m1>>m2;
        obj.getStu(id,name,m1,m2);
        obj.putStu();
        float total=obj.total();
        cout<<"total="<<total;
    }
