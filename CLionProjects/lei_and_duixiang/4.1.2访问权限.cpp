#include<iostream>
#include "string"
using namespace std;
//pubilc     �����ⶼ���Է���
//protected  ���ڿ��ԣ����ⲻ����
//private    ���ڿ��ԣ����ⲻ����
//�������ں�߼̳п����õ����������Լ̳У�˽�в��ܼ̳�
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
        name="����";
        car="������";
        m_passward=123;
    }
};
int main ()
{
    Person p1;
    p1.name="����";
    //p1.car ���ʲ���
    //p1.m_passward
}


