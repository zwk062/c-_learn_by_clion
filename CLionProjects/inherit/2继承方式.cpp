#include <iostream>
using namespace std;
//�̳з�ʽ

//�����̳�
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
        m_A=10;//�����й���Ȩ��->���๫��Ȩ��
        m_B=10;//�����б���Ȩ��->���ౣ��Ȩ��
        //m_C=10;//������˽��Ȩ��->������ʲ���
    }
};
void test01(){
    Son1 s1;
    s1.m_A=100;
    //s1.m_B=100;//��Son1���Ǳ���Ȩ�ޣ�������ʲ���
}
//�����̳�
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
        m_A=100;//�����й���Ȩ��->���ౣ��Ȩ��
        m_B=100;//�����б���Ȩ��->���ౣ��Ȩ��
        //m_C=10;//������˽��Ȩ��->������ʲ���
    }
};
void test02()
{
    Son2 s1;
    //s1.m_A=100;//����Ȩ��
    //s1.m_B=100;//����Ȩ��
}
//˽�м̳�
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
        m_A=100;//�����й���Ȩ��->����˽��Ȩ��
        m_B=100;//�����б���Ȩ��->����˽��Ȩ��
        //m_C=10;//������˽��Ȩ��->������ʲ���
    }
};
class GrandSon3:public Son3
{
public:
    void func1()
    {
       // m_A���ʲ���
    }

};