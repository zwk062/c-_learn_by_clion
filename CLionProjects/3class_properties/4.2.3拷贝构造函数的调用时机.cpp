#include <iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        cout<<"Ĭ�Ϲ��캯��"<<endl;
    }
    Person(int age)
    {
        m_Age=age;
        cout<<"�вι��캯��"<<endl;
    }
    Person(const Person &p)
    {
        m_Age=p.m_Age;
        cout<<"�������캯��"<<endl;
    }
    ~Person()
    {
        cout<<"��������"<<endl;
    }
    int m_Age;
};
//1ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
    Person p1(20);
    Person p2(p1);
    cout<<p2.m_Age<<endl;
}
//2.ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p)
{

}
void test02()
{
    Person p;
    doWork(p);
}
//3.ֵ��ʽ���ؾֲ�����  clion������
Person doWork2()
{
    Person p1;
    return p1;

}
void test03()
{
    Person p=doWork2();


}

int main (){
    //test01();
    //test02();
    test03();
}