#include <iostream>
#include <string>
using namespace std;
//普通写法
class Calculator
{
public:
    int getResult(string oper)
    {
        if(oper=="+")
        {
            return m_Num1+m_Num2;
        }
        else if(oper=="-")
        {
            return m_Num1-m_Num2;
        }
        else if(oper=="*")
        {
            return m_Num1*m_Num2;
        }
        //如果想拓展新功能，需要修改源码。
        //在真实的开发中 提倡 对拓展进行开放，对修改进行关闭。
    }
    int m_Num1;
    int m_Num2;

};
void test01()
{
    Calculator c;
    c.m_Num1=10;
    c.m_Num2=10;
    cout<<c.m_Num1<<"+"<<c.m_Num2<<"="<<c.getResult("+")<<endl;
    cout<<c.m_Num1<<"-"<<c.m_Num2<<"="<<c.getResult("-")<<endl;
    cout<<c.m_Num1<<"*"<<c.m_Num2<<"="<<c.getResult("*")<<endl;

}
//--------------------------------------------------------
//利用多态
//实现计算器的抽象类
class AbstractCaculator
{
public:
    virtual int getResult()
    {
        return 0;
    }
    int m_Num1;
    int m_Num2;

};
class AddCaculator:public AbstractCaculator
{
public:
    int getResult()
    {
        return m_Num2+m_Num1;
    }

};
class SubCaculator:public AbstractCaculator//subtraction减法
{
public:
    int getResult()
    {
        return m_Num2-m_Num1;
    }

};
class MulCaculator:public AbstractCaculator
{
public:
    int getResult()
    {
        return m_Num2*m_Num1;
    }

};
void test02()
{
    //多态使用条件
    //父类指针或者引用指向子类对象
    AbstractCaculator *abc =new AddCaculator;//堆区
    abc->m_Num1=10;
    abc->m_Num2=10;
    cout<<abc->m_Num1<<"+"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
    delete abc;//数据释放，指针类型没变
    abc=new SubCaculator;
    abc->m_Num1=10;
    abc->m_Num2=10;
    cout<<abc->m_Num1<<"-"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
    delete abc;
}


int main()
{
    //test01();
    test02();
}