#include <iostream>
using namespace std;
//继承方式

//公共继承
class Base1
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son1:public Base1
{
public:
    void func()
    {
        m_A=10;//父类中公共权限->子类公共权限
        m_B=10;//父类中保护权限->子类保护权限
        //m_C=10;//父类中私有权限->子类访问不到
    }
};
void test01(){
    Son1 s1;
    s1.m_A=100;
    //s1.m_B=100;//到Son1中是保护权限，类外访问不到
}
//保护继承
class Base2
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son2:protected Base2
{
public:
    void func()
    {
        m_A=100;//父类中公共权限->子类保护权限
        m_B=100;//父类中保护权限->子类保护权限
        //m_C=10;//父类中私有权限->子类访问不到
    }
};
void test02()
{
    Son2 s1;
    //s1.m_A=100;//保护权限
    //s1.m_B=100;//保护权限
}
//私有继承
class Base3
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son3: private Base3
{
public:
    void func()
    {
        m_A=100;//父类中公共权限->子类私有权限
        m_B=100;//父类中保护权限->子类私有权限
        //m_C=10;//父类中私有权限->子类访问不到
    }
};
class GrandSon3:public Son3
{
public:
    void func1()
    {
       // m_A访问不到
    }

};