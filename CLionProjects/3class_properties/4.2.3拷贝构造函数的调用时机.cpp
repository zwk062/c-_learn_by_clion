#include <iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        cout<<"默认构造函数"<<endl;
    }
    Person(int age)
    {
        m_Age=age;
        cout<<"有参构造函数"<<endl;
    }
    Person(const Person &p)
    {
        m_Age=p.m_Age;
        cout<<"拷贝构造函数"<<endl;
    }
    ~Person()
    {
        cout<<"析构函数"<<endl;
    }
    int m_Age;
};
//1使用一个已经创建完毕的对象来初始化一个新对象。
void test01()
{
    Person p1(20);
    Person p2(p1);
    cout<<p2.m_Age<<endl;
}
//2.值传递的方式给函数参数传值
void doWork(Person p)
{

}
void test02()
{
    Person p;
    doWork(p);
}
//3.值方式返回局部对象  clion不调用
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