#include <iostream>
using namespace std;
void average(int a, int b,int c)
{
float avg;
avg = (a + b + c);
  cout << "Average = " << avg;
}
int main()
{
int x, y, z;
cout << "Enter three numbers: ";
cin >> x >> y >> z;
average(x, y, z);
return 0;
}
