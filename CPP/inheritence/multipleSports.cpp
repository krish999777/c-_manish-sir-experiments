#include<iostream>
using namespace std;
class Test{
protected:
    int m1,m2,roll_no;
    char name[35];
public:
    void setTest(){
        cout<<"Enter name and roll no"<<endl;
        cin>>name>>roll_no;
        cout<<"Enter m1,m2"<<endl;
        cin>>m1>>m2;
    }
    void getTest(){
        cout<<"Name="<<name<<endl;
        cout<<"Roll no="<<roll_no<<endl;
        cout<<"Marks 1="<<m1<<endl;
        cout<<"Marks 2="<<m2<<endl;
    }
};
class Sports{
    int spoints;
public:
    int setSportsPoints(){
        cout<<"Enter level of sports achievement"<<endl;
        cout<<"Enter 1 for district level 2 for state level and 3 for national level"<<endl;
        int choice;
        cin>>choice;
        switch(choice){
        case 1:
            spoints=10;
            break;
        case 2:
            spoints=15;
            break;
        case 3:
            spoints=25;
            break;
        default:
            spoints=0;
            break;
        }
        return spoints;
    }
    int getSportsPoints(){
        return spoints;
    }
};
class Result:protected Test,private Sports{
    int total;
public:
    void setResult(){
        setTest();
        total=m1+m2+setSportsPoints();
    }
    void getResult(){
        getTest();
        cout<<"Sports points="<<getSportsPoints()<<endl;
        cout<<"Total="<<total<<endl;

    }
};
int main(){
    Result r;
    r.setResult();
    r.getResult();
    return 0;
}
