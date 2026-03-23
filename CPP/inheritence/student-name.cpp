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
class Faculty:public Person
{
    int id,bsal;
public:
    void setFaculty()
    {
        setPerson();
        cout<<"enter id ,basic salary:"<<endl;
        cin>>id>>bsal;
    }
    void getFaculty()
    {
        getPerson();
        cout<<"id="<<id<<endl;
        cout<<"Basic salary="<<bsal<<endl;

    }
    float gsal()
    {
        return bsal+0.66+0.37+0.11;
    }
};
int main()
{
    Student s1;
    s1.setStu();
    s1.getStu();
    int total=s1.totalmarks();
    cout<<"total="<<total;
    Faculty f1;
    f1.setFaculty();
    f1.getFaculty();
   float gross_Salary=f1.gsal();
   cout<<"Gross Salary="<<gross_Salary;
}
