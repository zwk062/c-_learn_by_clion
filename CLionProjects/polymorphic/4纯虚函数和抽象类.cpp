#include <iostream>
#include <string>
using namespace std;

//³éÏóÀà
class Base
{
public:
    //´¿Ğéº¯Êı
    virtual void func()=0;
};
class Son:public Base
{
public:
    void func()
    {
        cout<<"func()"<<endl;

    }
};
void test01()
{
    Base *base = new Son;
    base->func();
}
int main ()
{
    test01();
}