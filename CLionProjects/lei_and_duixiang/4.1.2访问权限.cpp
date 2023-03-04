#include<iostream>
#include "string"
using namespace std;
//pubilc     类内外都可以访问
//protected  类内可以，类外不可以
//private    类内可以，类外不可以
//后两个在后边继承可以用到，保护可以继承，私有不能继承
class Person
{
public:
    string name;
protected:
    string car;
private:
    int m_passward;
public:
    void func()
    {
        name="张三";
        car="拖拉机";
        m_passward=123;
    }
};
int main ()
{
    Person p1;
    p1.name="李四";
    //p1.car 访问不到
    //p1.m_passward
}


