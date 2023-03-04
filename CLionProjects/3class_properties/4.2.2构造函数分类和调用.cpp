#include <iostream>
using namespace std;
class person
{
public:
    person ()
    {
        cout<<"无参构造函数"<<endl;
    }
    person (int a)
    {
        age=a;
        cout<<"有参构造函数"<<endl;
    }
    person (const person &p)//拷贝构造
    {
        age=p.age;
        cout<<"拷贝构造函数"<<endl;
    }
    ~person()
    {
        cout<<"析构函数"<<endl;
    }
    int age;
};
void test1()
{
    //括号法
//    person p1;
//    person p2(10);
//    person p3(p2);
    //显示法
    person p1;
    person p2=person(10);
    person p3=person(p2);
    //person(10);//匿名对象，这句执行后会马上回收。
    //person(p3);//编译器会认为person(p3)==person p3
    //隐式转换法
    person p4 =10;
    person p5 =p4;
}
int main (){
    test1();
}