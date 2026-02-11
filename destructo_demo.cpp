#include<iostream>
using namespace std;
class box
{
    float width,depth,height;
public:
    box();
    box(float w,float d,float h);
    box(float val);
    float volume();
    ~box();
    void getbox();



};
box::box(float w,float d,float h)
{
    cout<<"wlecome to parameterizzed constructor\n";
    width=w;
    depth=d;
    height=h;
}
box::box()
{
    cout<<"welcome to default constructor\n";
    width=1;
    depth=1;
    height=1;
}
box::box(float val)
{
    cout<<"welcome to overloaded constrctor\n";
    width=val;
    depth=val;
    height=val;

}
void box::getbox()
{

    cout<<"width="<<width<<endl;
    cout<<"depth"<<depth<<endl;
    cout<<"heigt"<<height<<endl;
}
float box::volume()
{
    return (width*depth*height);
}
box::~box()
{
    cout<<"object destructor\n";
}

int main()
{
box b1;
b1.getbox();
box b2(1.2,2.2,3.2);
b2.getbox();
box b3(5.5);
b3.getbox();
float vol=b1.volume();
cout<<"volume1"<<vol<<endl;
vol=b2.volume();
cout<<"volume 2"<<vol<<endl;
vol=b3.volume();
cout<<"volume 3"<<vol<<endl;
}
