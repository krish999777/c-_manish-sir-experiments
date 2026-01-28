#include<iostream>
using namespace std;
void strlen();
void strcpy();
main(){
    strlen();
}
void strcpy(){
    char a[50]="krish";
    cin>>a;
    for(int i=0;i<50;i++){


    }

}
void strlen(){
    char a[50];
    cin>>a;
    int length=0;
    for(int i=0;i<50;i++){
        if(a[i]==0){
            cout<<"found";
        }
    }
}

