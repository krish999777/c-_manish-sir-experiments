#include <iostream>
using namespace std;

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main()
{
int x, y;
cout<< "Enter two numbers: ";
cin>> x >> y;
cout<< "Addition ="<< add(x, y)<< endl;
cout<< "Subtraction = "<< subtract(x, y)<< endl;
cout<< "Multiplication = "<< multiply(x, y)<< endl;
return 0;
}
int add(int a, int b)
{
return a + b;
}
int subtract(int a, int b)
{
return a - b;
}
int multiply(int a, int b)
{
 return a * b;
}
