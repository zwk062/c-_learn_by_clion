#include <iostream>
using namespace std;
class Base99
{
public:
    Base99()
    {
        m_A=100;
    }
    void func()
    {
        cout<<"Base99:func"<<endl;
    }
    int m_A;

};
class Son99:public Base99
{
public:
    Son99()
    {
        m_A=200;
    }
    void func()
    {
        cout<<"Son99:func"<<endl;
    }
    int m_A;

};
void test01()
{
    Son99 s;
    cout<<s.m_A<<endl;
    cout<<s.Base99::m_A<<endl;
}
void  test02()
{
    Son99 s;
    s.func();
    s.Base99::func();
}
int main()
{
    //test01();
    test02();
}