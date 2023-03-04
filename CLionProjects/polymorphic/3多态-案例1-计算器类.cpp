#include <iostream>
#include <string>
using namespace std;
//��ͨд��
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
        //�������չ�¹��ܣ���Ҫ�޸�Դ�롣
        //����ʵ�Ŀ����� �ᳫ ����չ���п��ţ����޸Ľ��йرա�
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
//���ö�̬
//ʵ�ּ������ĳ�����
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
class SubCaculator:public AbstractCaculator//subtraction����
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
    //��̬ʹ������
    //����ָ���������ָ���������
    AbstractCaculator *abc =new AddCaculator;//����
    abc->m_Num1=10;
    abc->m_Num2=10;
    cout<<abc->m_Num1<<"+"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
    delete abc;//�����ͷţ�ָ������û��
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