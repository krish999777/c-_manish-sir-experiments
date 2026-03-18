#include<iostream>
using namespace std;
class Student{
    int roll;
    char name[30];
    char branch[15];
    int m[10];
    int len;
public:
    void setStudent();
    void getStudent();
    int totalMarks();
};
void Student::setStudent(){
    cout<<"Enter roll,name,branch"<<endl;
    cin>>roll>>name>>branch;
    cout<<"enter number of subjects"<<endl;
    int n;
    cin>>n;
    len=n;
    cout<<"enter the marks for "<<n<<" subjects"<<endl;
    for(int i=0;i<n;i++){
        cout<<"enter marks for subject "<<i+1<<endl;
        cin>>m[i];
    }
}
void Student::getStudent(){
    cout<<"Roll no="<<roll<<endl;
    cout<<"Name="<<name<<endl;
    cout<<"Branch="<<branch<<endl;
    for(int i=0;i<len;i++){
        cout<<"Marks of subject "<<i+1<<"="<<m[i]<<endl;
    }

}
int Student::totalMarks(){
    int total;
    for(int i=0;i<len;i++){
       total+=m[i];
    }
    return total;
}
main(){
    int n;
    int i;
    cout<<"How many students do you want to enter"<<endl;
    cin>>n;
    Student s[n];
    cout<<"enter the details of "<<n<<" number of students"<<endl;
    for(i=0;i<n;i++){
        s[i].setStudent();
    }
    cout<<"Details of "<<n<<" number of students"<<endl;
    for(i=0;i<n;i++){
        s[i].getStudent();
    }
    cout<<"Total marks of "<<n<<" number of students"<<endl;
    for(i=0;i<n;i++){
        int total=s[i].totalMarks();
        cout<<"The total marks of student "<<i<<" is "<<total<<endl;
    }

}
