#include<iostream>
using namespace std;
class Person
{
    char name[20];
    int age;
public:
    void setPerson();
    void getPerson();
};
void Person::setPerson()
{
    cout<<"enter name and age:"<<endl;
    cin>>name>>age;
}
void Person::getPerson()
{
    cout<<"name="<<name<<endl;
    cout<<"age="<<age<<endl;
}
class Student:public Person
{
    int id,m1,m2;
public:
    void setStu()
    {
        setPerson();
        cout<<"enter id ,m1 and m2:"<<endl;
        cin>>id>>m1>>m2;
    }
    void getStu()
    {
        getPerson();
        cout<<"id="<<id<<endl;
        cout<<"m1="<<m1<<endl;
        cout<<"m2="<<m2<<endl;
    }
    int totalmarks()
    {
        return m1+m2;
    }
};

int main()
{
    Student s1;
    s1.setStu();
    s1.getStu();
    int total=s1.totalmarks();
    cout<<"total="<<total;
}
