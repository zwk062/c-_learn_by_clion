#include<iostream>
#include "string"
using namespace std;
const double PI =3.14;

class Circle
{
    //类中的属性和行为都叫成员  属性=成员属性=成员变量
    //行为=成员函数=成员方法
public:
    int m_r;

    double caculateZC()
    {
        return 2*PI*m_r;
    }
};
//学生类
class Student
{
public:
    string name;
    int id;
    void showStu()
    {
        cout<<"姓名："<<name<<" 学号："<<id<<endl;
    }

};
int main ()
{
//    //实例化
//    Circle c;
//    c.m_r=10;
//    cout<<"圆的周长为："<<c.caculateZC()<<endl;

    Student s;
    s.name="张三";
    s.id=1;
    s.showStu();

    Student s1;
    s1.name="李四";
    s1.id=2;
    s1.showStu();
}
