#include <iostream>
using namespace std;
int factorial();
int main()
{
int result;
result=factorial();
cout <<"Factorial="<< result<< endl;
return 0;
}
int factorial()
{
int n,fact=1;
cout<<"Enter a number:";
cin>> n;
for(int i=1; i<= n;i++)
{
fact=fact*i;
}
return fact;
}

