#include <iostream>
#include <string>
using namespace std;

//������
class Base
{
public:
    //���麯��
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