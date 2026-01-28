#include<iostream>
using namespace std;
main()
{
int i,a,b;
for(i=1;i<=10;i++)
{
cout<<"enter no.";
cin>>a;
if(a>99)
{
 continue;
}
b=b+a;
}
cout<<"addition="<<b;
}
