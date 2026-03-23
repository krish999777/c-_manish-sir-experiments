#include<iostream>
using namespace std;
class Student{
protected:
    int roll_no;
    char name[35];
public:
    void setStudent(){
        cout<<"Enter name and roll no"<<endl;
        cin>>name>>roll_no;
    }
    void getStudent(){
        cout<<"Name="<<name<<endl;
        cout<<"Roll no="<<roll_no<<endl;
    }
};
class Test:private Student{
protected:
    int m1,m2;
public:
    void setTest(){
        setStudent();
        cout<<"Enter m1,m2"<<endl;
        cin>>m1>>m2;
    }
    void getTest(){
        getStudent();
        cout<<"Marks 1="<<m1<<endl;
        cout<<"Marks 2="<<m2<<endl;
    }
};
class Result:protected Test{
    int total;
public:
    void setResult(){
        setTest();
        total=m1+m2;
    }
    void getResult(){
        getTest();
        cout<<"Total="<<total<<endl;

    }
};
int main(){
    Result r;
    r.setResult();
    r.getResult();
    return 0;
}
