#include<iostream>
#include "string"
using namespace std;
const double PI =3.14;

class Circle
{
    //���е����Ժ���Ϊ���г�Ա  ����=��Ա����=��Ա����
    //��Ϊ=��Ա����=��Ա����
public:
    int m_r;

    double caculateZC()
    {
        return 2*PI*m_r;
    }
};
//ѧ����
class Student
{
public:
    string name;
    int id;
    void showStu()
    {
        cout<<"������"<<name<<" ѧ�ţ�"<<id<<endl;
    }

};
int main ()
{
//    //ʵ����
//    Circle c;
//    c.m_r=10;
//    cout<<"Բ���ܳ�Ϊ��"<<c.caculateZC()<<endl;

    Student s;
    s.name="����";
    s.id=1;
    s.showStu();

    Student s1;
    s1.name="����";
    s1.id=2;
    s1.showStu();
}
